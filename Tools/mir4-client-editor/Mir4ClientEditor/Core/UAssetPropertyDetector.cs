using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;

namespace Mir4ClientEditor.Core
{
    public class UAssetProperty
    {
        public string Name { get; set; }
        public string Type { get; set; }
        public string Variant { get; set; }
        public object Value { get; set; }
        public int Index { get; set; }
    }

    public class UAssetPropertyDetector
    {
        private const uint UASSET_MAGIC = 2653586369;
        private const uint ACE7_MAGIC = 0x37454341;
        private List<string> _nameTable;

        public UAssetPropertyDetector()
        {
            _nameTable = new List<string>();
        }

        public uint GetFileSignature(string path, out byte[] nextBytes)
        {
            byte[] buffer = new byte[4];
            uint res = uint.MaxValue;
            nextBytes = new byte[32];

            using (FileStream fs = new FileStream(path, FileMode.Open, FileAccess.Read))
            {
                if (fs.Read(buffer, 0, buffer.Length) == buffer.Length) res = BitConverter.ToUInt32(buffer, 0);
                fs.Read(nextBytes, 0, nextBytes.Length);
            }

            return res;
        }

        public List<UAssetProperty> DetectProperties(string filePath)
        {
            var properties = new List<UAssetProperty>();
            byte[] headerBytes;
            var signature = GetFileSignature(filePath, out headerBytes);

            if (Path.GetExtension(filePath).ToLower() == ".usmap")
            {
                return LoadUsmapProperties(filePath);
            }

            // Check for ACE7 encryption
            if (signature == ACE7_MAGIC)
            {
                throw new Exception("ACE7 encrypted files not supported yet");
            }

            if (signature != UASSET_MAGIC)
            {
                throw new Exception($"Invalid UAsset signature: {signature:X8}");
            }

            using (var reader = new BinaryReader(File.OpenRead(filePath)))
            {
                try
                {
                    // Skip signature
                    reader.BaseStream.Position = 4;

                    // Read name table count from header
                    var nameCount = BitConverter.ToInt32(headerBytes, 0x10);
                    Console.WriteLine($"Name count: {nameCount}");

                    // Skip to name table
                    reader.BaseStream.Position = 0x45; // Name table typically starts here

                    // Read name table
                    for (int i = 0; i < nameCount && i < 1000; i++) // Safety limit
                    {
                        var nameLength = reader.ReadInt16();
                        if (nameLength <= 0 || nameLength > 256)
                            continue;

                        var nameBytes = reader.ReadBytes(nameLength);
                        var name = Encoding.UTF8.GetString(nameBytes, 0, nameLength - 1); // Remove null terminator
                        _nameTable.Add(name);
                        Console.WriteLine($"Read name: {name}");
                    }

                    // Look for property section
                    while (reader.BaseStream.Position < reader.BaseStream.Length - 8)
                    {
                        var marker = reader.ReadInt32();
                        if (marker == 0x50524F50) // "PROP"
                        {
                            var count = reader.ReadInt32();
                            Console.WriteLine($"Found {count} properties");

                            for (int i = 0; i < count && i < 100; i++) // Safety limit
                            {
                                var property = ReadProperty(reader, i);
                                if (property != null)
                                {
                                    properties.Add(property);
                                    Console.WriteLine($"Added property: {property.Name} ({property.Type})");
                                }
                            }
                            break;
                        }
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Error reading UAsset: {ex.Message}");
                    throw;
                }
            }

            return properties;
        }

        private UAssetProperty ReadProperty(BinaryReader reader, int index)
        {
            try
            {
                var nameIndex = reader.ReadInt32();
                if (nameIndex < 0 || nameIndex >= _nameTable.Count)
                {
                    Console.WriteLine($"Invalid name index: {nameIndex}");
                    return null;
                }

                var name = _nameTable[nameIndex];
                var typeId = reader.ReadByte();
                var type = GetPropertyType(typeId);

                if (string.IsNullOrEmpty(type))
                {
                    Console.WriteLine($"Unknown type ID: {typeId:X2}");
                    return null;
                }

                object value = null;
                string variant = null;

                // Read property value
                switch (type)
                {
                    case "IntProperty":
                        value = reader.ReadInt32();
                        break;
                    case "StrProperty":
                        var strLength = reader.ReadInt32();
                        if (strLength > 0 && strLength < 1024)
                        {
                            var strBytes = reader.ReadBytes(strLength * 2);
                            value = Encoding.Unicode.GetString(strBytes);
                            variant = "utf-16";
                        }
                        break;
                }

                return new UAssetProperty
                {
                    Name = name,
                    Type = type,
                    Value = value,
                    Variant = variant,
                    Index = index
                };
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error reading property: {ex.Message}");
                return null;
            }
        }

        private List<UAssetProperty> LoadUsmapProperties(string filePath)
        {
            var properties = new List<UAssetProperty>();
            try
            {
                using (var reader = new BinaryReader(File.OpenRead(filePath)))
                {
                    var nameCount = reader.ReadInt32();
                    if (nameCount <= 0 || nameCount > 10000)
                        return properties;

                    for (int i = 0; i < nameCount; i++)
                    {
                        var nameLength = reader.ReadInt16();
                        if (nameLength <= 0 || nameLength > 256)
                            continue;

                        var nameBytes = reader.ReadBytes(nameLength);
                        var name = Encoding.UTF8.GetString(nameBytes, 0, nameLength - 1);
                        var typeId = reader.ReadByte();

                        properties.Add(new UAssetProperty
                        {
                            Name = name,
                            Type = GetPropertyType(typeId) ?? "Unknown",
                            Index = i
                        });
                    }

                    return properties;
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error loading usmap: {ex.Message}");
                return properties;
            }
        }

        private static string GetPropertyType(byte typeId)
        {
            switch (typeId)
            {
                case 0x01: return "IntProperty";
                case 0x02: return "StrProperty";
                case 0x03: return "BoolProperty";
                case 0x04: return "FloatProperty";
                case 0x05: return "ObjectProperty";
                case 0x06: return "NameProperty";
                case 0x07: return "ByteProperty";
                case 0x08: return "ArrayProperty";
                default: return null;
            }
        }
    }
}
