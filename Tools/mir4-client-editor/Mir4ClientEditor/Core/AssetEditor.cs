using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UAssetAPI;
using System.IO;
using System.Linq;
using System.Reflection;

namespace Mir4ClientEditor.Core
{
    public class AssetEditor
    {
        private string _assetPath;
        private UAsset _asset;
        private List<AssetTableEntry> _tableEntries;
        private bool _hasUnsavedChanges;
        private UAssetPropertyDetector _propertyDetector;
        private HashSet<int> _modifiedEntries;

        public event EventHandler<bool> UnsavedChangesChanged;

        public AssetEditor()
        {
            _tableEntries = new List<AssetTableEntry>();
            _propertyDetector = new UAssetPropertyDetector();
            _modifiedEntries = new HashSet<int>();
        }

        public async Task LoadAsset(string path)
        {
            try
            {
                _assetPath = path;
                
                await Task.Run(() =>
                {
                    // Always load the asset first
                    _asset = new UAsset(_assetPath, UE4Version.VER_UE4_27);
                    _tableEntries.Clear();
                    _modifiedEntries.Clear();

                    // First try our custom property detector
                    var customProperties = _propertyDetector.DetectProperties(_assetPath);

                    if (customProperties.Any())
                    {
                        foreach (var prop in customProperties)
                        {
                            _tableEntries.Add(new AssetTableEntry
                            {
                                Name = prop.Name,
                                Type = prop.Type,
                                Value = prop.Value?.ToString() ?? "",
                                Variant = prop.Variant,
                                OriginalProperty = prop // Store reference to original property
                            });
                        }
                    }
                    else // If no custom properties found, use UAssetAPI
                    {
                        Console.WriteLine($"Number of exports: {_asset.Exports.Count}");
                        foreach (var export in _asset.Exports)
                        {
                            var exportType = export.GetType();
                            Console.WriteLine($"Export type: {exportType.Name}");

                            if (export is DataTableExport dataTableExport)
                            {
                                Console.WriteLine("Found DataTableExport");
                                if (dataTableExport.Table?.Data != null)
                                {
                                    Console.WriteLine($"Table has {dataTableExport.Table.Data.Count} rows");
                                    for (int i = 0; i < dataTableExport.Table.Data.Count; i++)
                                    {
                                        var row = dataTableExport.Table.Data[i];
                                        if (row?.Value != null)
                                        {
                                            foreach (var prop in row.Value)
                                            {
                                                if (prop != null)
                                                {
                                                    AddPropertyToTableEntries(prop, $"Row {i + 1}", prop);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (export is NormalExport normalExport && normalExport.Data != null)
                            {
                                Console.WriteLine($"Found NormalExport with {normalExport.Data.Count} properties");
                                foreach (var prop in normalExport.Data)
                                {
                                    if (prop != null)
                                    {
                                        AddPropertyToTableEntries(prop, null, prop);
                                    }
                                }
                            }
                        }
                    }
                });

                SetUnsavedChanges(false);
            }
            catch (Exception ex)
            {
                throw new Exception($"Failed to load asset: {ex.Message}", ex);
            }
        }

        private void AddPropertyToTableEntries(object prop, string rowPrefix = null, object originalProp = null)
        {
            if (prop == null) return;

            var tableEntry = new AssetTableEntry
            {
                Index = _tableEntries.Count,
                Type = GetPropertyType(prop),
                Variant = GetPropertyVariant(prop),
                ArrayIndex = GetArrayIndex(prop),
                SerialOffset = 350000 + _tableEntries.Count,
                IsZero = false,
                OriginalProperty = originalProp
            };

            string propName = null;
            var nameProperty = prop.GetType().GetProperty("Name");
            if (nameProperty != null)
            {
                var nameValue = nameProperty.GetValue(prop);
                if (nameValue != null)
                {
                    var valueProperty = nameValue.GetType().GetProperty("Value");
                    if (valueProperty != null)
                    {
                        var value = valueProperty.GetValue(nameValue);
                        if (value != null)
                        {
                            propName = value.ToString();
                        }
                    }
                }
            }

            if (string.IsNullOrEmpty(propName))
            {
                propName = GetPropertyType(prop);
            }

            tableEntry.Name = rowPrefix != null ? $"{rowPrefix}.{propName}" : propName;

            switch (prop.GetType().Name)
            {
                case "IntPropertyData":
                    var intProp = prop as UAssetAPI.PropertyTypes.IntPropertyData;
                    tableEntry.Value = intProp.Value.ToString();
                    tableEntry.IsEditable = true;
                    break;

                case "StrPropertyData":
                    var strProp = prop as UAssetAPI.PropertyTypes.StrPropertyData;
                    tableEntry.Value = strProp.Value?.ToString() ?? string.Empty;
                    tableEntry.IsEditable = true;
                    break;

                case "BoolPropertyData":
                    var boolProp = prop as UAssetAPI.PropertyTypes.BoolPropertyData;
                    tableEntry.Value = boolProp.Value.ToString();
                    tableEntry.IsEditable = true;
                    tableEntry.IsDropdown = true;
                    tableEntry.DropdownValues = new[] { "True", "False" };
                    break;

                case "FloatPropertyData":
                    var floatProp = prop as UAssetAPI.PropertyTypes.FloatPropertyData;
                    tableEntry.Value = floatProp.Value.ToString();
                    tableEntry.IsEditable = true;
                    break;

                case "NamePropertyData":
                    var nameProp = prop as UAssetAPI.PropertyTypes.NamePropertyData;
                    tableEntry.Value = nameProp.Value?.ToString() ?? string.Empty;
                    tableEntry.IsEditable = true;
                    break;

                case "ObjectPropertyData":
                    var objProp = prop as UAssetAPI.PropertyTypes.ObjectPropertyData;
                    tableEntry.Value = objProp.Value?.Index.ToString() ?? "0";
                    tableEntry.IsEditable = true;
                    break;

                case "BytePropertyData":
                    var byteProp = prop as UAssetAPI.PropertyTypes.BytePropertyData;
                    if (byteProp.ByteType == UAssetAPI.PropertyTypes.BytePropertyType.Byte)
                    {
                        tableEntry.Value = byteProp.Value.ToString();
                        tableEntry.IsEditable = true;
                    }
                    else
                    {
                        var enumValue = byteProp.GetEnumFull(_asset)?.ToString() ?? string.Empty;
                        tableEntry.Value = ExtractEnumValue(enumValue);
                        tableEntry.IsDropdown = true;
                        tableEntry.IsEditable = true;
                        tableEntry.DropdownValues = GetEnumValuesForType(GetEnumType(enumValue));
                    }
                    break;

                case "EnumPropertyData":
                    var enumProp = prop as UAssetAPI.PropertyTypes.EnumPropertyData;
                    var enumFullValue = enumProp.Value?.ToString() ?? string.Empty;
                    tableEntry.Value = ExtractEnumValue(enumFullValue);
                    tableEntry.IsEditable = true;
                    tableEntry.IsDropdown = true;
                    tableEntry.DropdownValues = GetEnumValuesForType(GetEnumType(enumFullValue));
                    break;

                case "TextPropertyData":
                    var textProp = prop as UAssetAPI.PropertyTypes.TextPropertyData;
                    tableEntry.Value = textProp.Value?.ToString() ?? string.Empty;
                    tableEntry.IsEditable = true;
                    break;

                case "ArrayPropertyData":
                    var arrayProp = prop as UAssetAPI.PropertyTypes.ArrayPropertyData;
                    tableEntry.Value = $"Collection[{arrayProp.Value?.Length ?? 0}]";
                    tableEntry.IsCollection = true;
                    tableEntry.CollectionType = arrayProp.ArrayType?.ToString();
                    break;

                case "MapPropertyData":
                    var mapProp = prop as UAssetAPI.PropertyTypes.MapPropertyData;
                    tableEntry.Value = "Map";
                    tableEntry.IsCollection = true;
                    break;

                default:
                    tableEntry.Value = prop.ToString();
                    break;
            }

            _tableEntries.Add(tableEntry);

            // Handle array properties
            if (prop.GetType().Name == "ArrayPropertyData")
            {
                var arrayProp = prop as UAssetAPI.PropertyTypes.ArrayPropertyData;
                if (arrayProp.Value != null)
                {
                    for (int i = 0; i < arrayProp.Value.Length; i++)
                    {
                        var arrayItem = arrayProp.Value[i];
                        if (arrayItem != null)
                        {
                            var arrayEntry = new AssetTableEntry
                            {
                                Name = $"{tableEntry.Name}[{i}]",
                                Type = GetPropertyType(arrayItem),
                                Value = GetPropertyValue(arrayItem),
                                Variant = GetPropertyVariant(arrayItem),
                                ArrayIndex = i,
                                SerialOffset = 350000 + _tableEntries.Count,
                                IsZero = false,
                                OriginalProperty = arrayItem
                            };
                            _tableEntries.Add(arrayEntry);
                        }
                    }
                }
            }

            // Handle struct properties
            /*if (prop.GetType().Name == "StructPropertyData")
            {
                var structProp = prop as UAssetAPI.PropertyTypes.StructPropertyData;
                if (structProp.Value != null)
                {
                    var structValue = structProp.Value as System.Collections.IEnumerable;
                    if (structValue != null)
                    {
                        foreach (var structField in structValue)
                        {
                            AddPropertyToTableEntries(structField, tableEntry.Name, structField);
                        }
                        return; // Skip adding the main struct entry
                    }
                }
            }
            */
        }

        private string GetPropertyName(object prop)
        {
            try
            {
                var nameProp = prop.GetType().GetProperty("Name");
                if (nameProp != null)
                {
                    var name = nameProp.GetValue(prop);
                    if (name != null)
                    {
                        var valueProperty = name.GetType().GetProperty("Value");
                        if (valueProperty != null)
                        {
                            var value = valueProperty.GetValue(name);
                            if (value != null)
                            {
                                var stringValue = value.GetType().GetProperty("Value");
                                if (stringValue != null)
                                {
                                    return stringValue.GetValue(value)?.ToString() ?? "Unknown";
                                }
                                return value.ToString();
                            }
                        }
                        return name.ToString();
                    }
                }
            }
            catch
            {
                // Ignore errors
            }
            return "Unknown";
        }

        private string GetPropertyType(object prop)
        {
            if (prop == null) return "Unknown";
            
            try
            {
                var propertyTypeProp = prop.GetType().GetProperty("PropertyType");
                if (propertyTypeProp != null)
                {
                    var propertyType = propertyTypeProp.GetValue(prop);
                    if (propertyType != null)
                    {
                        var valueProperty = propertyType.GetType().GetProperty("Value");
                        if (valueProperty != null)
                        {
                            return valueProperty.GetValue(propertyType)?.ToString() ?? prop.GetType().Name;
                        }
                    }
                }
            }
            catch
            {
                // Ignore errors
            }

            var type = prop.GetType().Name;
            return type.EndsWith("PropertyData") ? type.Substring(0, type.Length - "PropertyData".Length) : type;
        }

        private string GetPropertyValue(object prop)
        {
            try
            {
                var valueProp = prop.GetType().GetProperty("Value");
                if (valueProp != null)
                {
                    var value = valueProp.GetValue(prop);
                    if (value == null) return string.Empty;

                    // Handle special cases
                    if (prop.GetType().Name == "TextPropertyData")
                    {
                        var cultureInvariantStringProp = value.GetType().GetProperty("CultureInvariantString");
                        if (cultureInvariantStringProp != null)
                        {
                            return cultureInvariantStringProp.GetValue(value)?.ToString() ?? string.Empty;
                        }
                    }
                    else if (prop.GetType().Name == "StrPropertyData")
                    {
                        return value.ToString();
                    }
                    else if (value is Array arr)
                    {
                        return $"Array[{arr.Length}]";
                    }
                    else if (value is System.Collections.IEnumerable enumerable && !(value is string))
                    {
                        int count = 0;
                        foreach (var _ in enumerable) count++;
                        return $"Collection[{count}]";
                    }

                    return value.ToString();
                }
            }
            catch
            {
                // Ignore errors
            }
            return string.Empty;
        }

        private string GetPropertyVariant(object prop)
        {
            try
            {
                if (prop.GetType().Name == "StructPropertyData")
                {
                    var structTypeProp = prop.GetType().GetProperty("StructType");
                    if (structTypeProp != null)
                    {
                        var structType = structTypeProp.GetValue(prop);
                        if (structType != null)
                        {
                            var valueProperty = structType.GetType().GetProperty("Value");
                            if (valueProperty != null)
                            {
                                var value = valueProperty.GetValue(structType);
                                if (value != null)
                                {
                                    var stringValue = value.GetType().GetProperty("Value");
                                    if (stringValue != null)
                                    {
                                        return stringValue.GetValue(value)?.ToString() ?? string.Empty;
                                    }
                                    return value.ToString();
                                }
                            }
                        }
                    }
                }
            }
            catch
            {
                // Ignore errors
            }
            return string.Empty;
        }

        private int GetArrayIndex(object prop)
        {
            try
            {
                var arrayIndexProp = prop.GetType().GetProperty("ArrayIndex");
                if (arrayIndexProp != null)
                {
                    var value = arrayIndexProp.GetValue(prop);
                    if (value is int index)
                    {
                        return index;
                    }
                }
            }
            catch
            {
                // Ignore errors
            }
            return 0;
        }

        private string[] GetEnumValuesForType(string enumType)
        {
            // You can expand this list based on the enum types you encounter
            switch (enumType)
            {
                case "EGenderType":
                    return new[] { "FEMALE", "MALE" };
                case "ECollisionEnabled":
                    return new[] { "NoCollision", "QueryOnly", "PhysicsOnly", "QueryAndPhysics" };
                case "EInputEvent":
                    return new[] { "IE_Pressed", "IE_Released", "IE_Repeat", "IE_DoubleClick", "IE_Axis" };
                case "ESlateVisibility":
                    return new[] { "Visible", "Collapsed", "Hidden", "HitTestInvisible", "SelfHitTestInvisible" };
                default:
                    // For unknown enum types, try to parse the current value and add it as an option
                    return new[] { enumType };
            }
        }

        private string ExtractEnumValue(string fullEnumValue)
        {
            // Handle cases like "EGenderType::FEMALE(0)" or "EGenderType::FEMALE"
            if (fullEnumValue.Contains("::"))
            {
                var parts = fullEnumValue.Split("::");
                if (parts.Length > 1)
                {
                    var value = parts[1];
                    // Remove any parentheses and numbers if present
                    var parenIndex = value.IndexOf('(');
                    if (parenIndex > 0)
                    {
                        value = value.Substring(0, parenIndex);
                    }
                    return value;
                }
            }
            return fullEnumValue;
        }

        private string GetEnumType(string fullEnumValue)
        {
            // Extract enum type from values like "EGenderType::FEMALE"
            if (fullEnumValue.Contains("::"))
            {
                return fullEnumValue.Split("::")[0];
            }
            return fullEnumValue;
        }

        public async Task SaveAsset(string path = null)
        {
            try
            {
                string savePath = path ?? _assetPath;
                
                if (File.Exists(savePath))
                {
                    File.Copy(savePath, savePath + ".bak", true);
                }

                await Task.Run(() =>
                {
                    // Get only modified entries
                    var modifiedEntries = _tableEntries.Where((entry, index) => _modifiedEntries.Contains(index)).ToList();
                    if (modifiedEntries.Count == 0) return; // Nothing to save

                    foreach (var entry in modifiedEntries)
                    {
                        if (entry.OriginalProperty != null)
                        {
                            UpdatePropertyValue(entry.OriginalProperty, entry.Value);
                        }
                    }

                    _asset.Write(savePath);
                });

                _assetPath = savePath;
                _modifiedEntries.Clear();
                SetUnsavedChanges(false);
            }
            catch (Exception ex)
            {
                throw new Exception($"Failed to save asset: {ex.Message}", ex);
            }
        }

        private void UpdatePropertyValue(object prop, string newValue)
        {
            try
            {
                var valueProp = prop.GetType().GetProperty("Value");
                if (valueProp != null)
                {
                    var targetType = valueProp.PropertyType;

                    if (targetType.Name == "FString")
                    {
                        // Get the current FString instance
                        var currentValue = valueProp.GetValue(prop);
                        if (currentValue != null)
                        {
                            Console.WriteLine($"FString type: {currentValue.GetType().FullName}");
                            var properties = currentValue.GetType().GetProperties();
                            foreach (var p in properties)
                            {
                                Console.WriteLine($"Property: {p.Name} ({p.PropertyType.Name})");
                            }

                            // Try to find the string value property
                            var stringProp = currentValue.GetType().GetProperties()
                                .FirstOrDefault(p => p.PropertyType == typeof(string));

                            if (stringProp != null)
                            {
                                stringProp.SetValue(currentValue, newValue);
                                return;
                            }
                            else
                            {
                                // Try setting the string value through ToString override
                                var toStringMethod = currentValue.GetType().GetMethod("ToString");
                                if (toStringMethod != null && toStringMethod.DeclaringType != typeof(object))
                                {
                                    var fields = currentValue.GetType().GetFields(System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public);
                                    foreach (var field in fields)
                                    {
                                        Console.WriteLine($"Field: {field.Name} ({field.FieldType.Name})");
                                        if (field.FieldType == typeof(string))
                                        {
                                            field.SetValue(currentValue, newValue);
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                        return;
                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error updating property value: {ex.Message}");
            }
        }

        public List<AssetTableEntry> GetTableEntries()
        {
            return _tableEntries;
        }

        public void UpdateEntryValue(int index, string columnName, string value)
        {
            if (index < 0 || index >= _tableEntries.Count) return;

            var entry = _tableEntries[index];
            var changed = false;

            switch (columnName)
            {
                case "Value":
                    if (entry.OriginalProperty.ToString() != value)
                    {
                        entry.Value = value;
                        changed = true;
                        _modifiedEntries.Add(index);
                    }
                    break;
                case "Value2":
                    if (entry.Value2 != value)
                    {
                        entry.Value2 = value;
                        changed = true;
                        _modifiedEntries.Add(index);
                    }
                    break;
                case "Value3":
                    if (entry.Value3 != value)
                    {
                        entry.Value3 = value;
                        changed = true;
                        _modifiedEntries.Add(index);
                    }
                    break;
                case "Value4":
                    if (entry.Value4 != value)
                    {
                        entry.Value4 = value;
                        changed = true;
                        _modifiedEntries.Add(index);
                    }
                    break;
                case "Value5":
                    if (entry.Value5 != value)
                    {
                        entry.Value5 = value;
                        changed = true;
                        _modifiedEntries.Add(index);
                    }
                    break;
            }

            if (changed)
            {
                _hasUnsavedChanges = true;
                UnsavedChangesChanged?.Invoke(this, _hasUnsavedChanges);
            }
        }

        public void UpdateEntryIsZero(int index, bool isZero)
        {
            if (index < 0 || index >= _tableEntries.Count) return;

            var entry = _tableEntries[index];
            if (entry.IsZero != isZero)
            {
                entry.IsZero = isZero;
                _hasUnsavedChanges = true;
                UnsavedChangesChanged?.Invoke(this, _hasUnsavedChanges);
            }
        }

        private void SetUnsavedChanges(bool hasChanges)
        {
            if (_hasUnsavedChanges != hasChanges)
            {
                _hasUnsavedChanges = hasChanges;
                UnsavedChangesChanged?.Invoke(this, hasChanges);
            }
        }

        public bool HasUnsavedChanges => _hasUnsavedChanges;
    }

    public class AssetTableEntry
    {
        public int Index { get; set; }
        public string Name { get; set; }
        public string Type { get; set; }
        public string Variant { get; set; }
        public string Value { get; set; }
        public string Value2 { get; set; }
        public string Value3 { get; set; }
        public string Value4 { get; set; }
        public string Value5 { get; set; }
        public int ArrayIndex { get; set; }
        public int SerialOffset { get; set; }
        public bool IsZero { get; set; }
        public bool IsEditable { get; set; }
        public bool IsDropdown { get; set; }
        public string[] DropdownValues { get; set; }
        public bool IsCollection { get; set; }
        public string CollectionType { get; set; }
        public object OriginalProperty { get; set; }
    }
}
