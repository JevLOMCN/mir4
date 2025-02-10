using System;
using System.Windows.Forms;
using System.Drawing;
using Mir4ClientEditor.Core;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

namespace Mir4ClientEditor.Forms
{
    public partial class UAssetEditorForm : Form
    {
        private AssetEditor _assetEditor;
        private string _assetPath;
        private int _currentPage = 1;
        private int _itemsPerPage = 50;
        private string _filterText = "";
        private int _selectedRow = -1;
        private DataGridView _dataGridView;
        private StatusStrip _statusStrip;
        private ToolStripStatusLabel _statusLabel;

        public UAssetEditorForm()
        {
            InitializeComponent();
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            SetupUI();
            InitializeCustomControls();
            SetupEvents();
            SetStatus("Ready");
        }

        #region Load Assets
        public async Task LoadAsset(string assetPath)
        {
            try
            {
                SetStatus("Loading asset...");
                SetControlsEnabled(false);

                _assetPath = assetPath;
                _assetEditor = new AssetEditor();
                await _assetEditor.LoadAsset(assetPath);

                // Update row selector dropdown
                var rowComboBox = (ComboBox)Controls.Find("rowComboBox", false)[0];
                rowComboBox.Items.Clear();

                // Get unique row numbers by parsing "Row X." pattern
                var rowNumbers = _assetEditor.GetTableEntries()
                    .Select(e => e.Name)
                    .Where(n => n?.StartsWith("Row ") == true)
                    .Select(n =>
                    {
                        var match = System.Text.RegularExpressions.Regex.Match(n, @"Row (\d+)\.");
                        return match.Success ? int.Parse(match.Groups[1].Value) : -1;
                    })
                    .Where(n => n != -1)
                    .Distinct()
                    .OrderBy(n => n)
                    .ToList();

                rowComboBox.Items.AddRange(rowNumbers.Select(n => $"Row {n}").ToArray());

                RefreshDataGrid();
                SetStatus($"Loaded {Path.GetFileName(assetPath)}");
            }
            catch (Exception ex)
            {
                SetStatus($"Error loading asset: {ex.Message}");
            }
            finally
            {
                SetControlsEnabled(true);
            }
        }
        #endregion

        #region InitializeCustomControls
        private void InitializeCustomControls()
        {
            // Add Open/Save buttons
            var openButton = new Button
            {
                Name = "openButton",
                Text = "Open UAsset",
                Location = new Point(12, 12),
                Width = 100,
                Height = 25
            };
            openButton.Click += OpenButton_Click;

            var saveButton = new Button
            {
                Name = "saveButton",
                Text = "Save",
                Location = new Point(openButton.Right + 10, 12),
                Width = 80,
                Height = 25,
                Enabled = false
            };
            saveButton.Click += SaveButton_Click;

            // Add filter textbox
            var filterLabel = new Label
            {
                Text = "Filter:",
                Location = new Point(saveButton.Right + 20, 16),
                AutoSize = true
            };
            var filterTextBox = new TextBox
            {
                Name = "filterTextBox",
                Location = new Point(filterLabel.Right + 5, 12),
                Width = 200,
                Height = 23
            };
            filterTextBox.TextChanged += FilterTextBox_TextChanged;

            // Add row selector dropdown
            var rowLabel = new Label
            {
                Text = "Row:",
                Location = new Point(filterTextBox.Right + 20, 16),
                AutoSize = true
            };
            var rowComboBox = new ComboBox
            {
                Name = "rowComboBox",
                Location = new Point(rowLabel.Right + 5, 12),
                Width = 100,
                Height = 23,
                DropDownStyle = ComboBoxStyle.DropDownList
            };
            rowComboBox.SelectedIndexChanged += RowComboBox_SelectedIndexChanged;

            // Add pagination controls at fixed positions
            var prevButton = new Button
            {
                Name = "prevButton",
                Text = "Previous",
                Location = new Point(12, 740),
                Width = 80,
                Height = 25
            };
            prevButton.Click += PrevButton_Click;

            var nextButton = new Button
            {
                Name = "nextButton",
                Text = "Next",
                Location = new Point(prevButton.Right + 10, 740),
                Width = 80,
                Height = 25
            };
            nextButton.Click += NextButton_Click;

            var pageLabel = new Label
            {
                Name = "pageLabel",
                Text = "Page 1",
                Location = new Point(nextButton.Right + 10, 745),
                AutoSize = true
            };

            var itemsPerPageLabel = new Label
            {
                Text = "Items per page:",
                Location = new Point(pageLabel.Right + 20, 745),
                AutoSize = true
            };
            var itemsPerPageCombo = new ComboBox
            {
                Name = "itemsPerPageCombo",
                Location = new Point(itemsPerPageLabel.Right + 5, 740),
                Width = 60,
                Height = 23,
                DropDownStyle = ComboBoxStyle.DropDownList
            };
            itemsPerPageCombo.Items.AddRange(new object[] { 25, 50, 100, 200 });
            itemsPerPageCombo.SelectedItem = _itemsPerPage;
            itemsPerPageCombo.SelectedIndexChanged += ItemsPerPageCombo_SelectedIndexChanged;

            // Add controls to form
            this.Controls.AddRange(new Control[] {
                openButton, saveButton,
                filterLabel, filterTextBox,
                rowLabel, rowComboBox,
                prevButton, nextButton, pageLabel,
                itemsPerPageLabel, itemsPerPageCombo
            });
        }
        #endregion

        #region Setup UI
        private void SetupUI()
        {
            this.Text = "UAsset Editor";
            this.Size = new Size(1200, 800);
            this.StartPosition = FormStartPosition.CenterScreen;

            // Create DataGridView
            _dataGridView = new DataGridView
            {
                Name = "dataGridView",
                Location = new Point(12, 50),
                Width = 1160,
                Height = 680,
                AllowUserToAddRows = false,
                AllowUserToDeleteRows = false,
                ReadOnly = false,
                AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill,
                SelectionMode = DataGridViewSelectionMode.FullRowSelect,
                MultiSelect = false,
                EditMode = DataGridViewEditMode.EditOnEnter
            };

            _dataGridView.CellEndEdit += DataGridView_CellEndEdit;
            _dataGridView.CellBeginEdit += DataGridView_CellBeginEdit;

            // Add columns with better proportions
            _dataGridView.Columns.AddRange(new DataGridViewColumn[]
            {
                new DataGridViewTextBoxColumn
                {
                    Name = "Index",
                    HeaderText = "",
                    DataPropertyName = "Index",
                    Width = 40,
                    DefaultCellStyle = new DataGridViewCellStyle { Alignment = DataGridViewContentAlignment.MiddleRight }
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Name",
                    HeaderText = "Name",
                    DataPropertyName = "Name",
                    Width = 150
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Type",
                    HeaderText = "Type",
                    DataPropertyName = "Type",
                    Width = 100
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Variant",
                    HeaderText = "Variant",
                    DataPropertyName = "Variant",
                    Width = 80
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Value",
                    HeaderText = "Value",
                    DataPropertyName = "Value",
                    Width = 400
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Value2",
                    HeaderText = "Value 2",
                    DataPropertyName = "Value2",
                    Width = 60
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Value3",
                    HeaderText = "Value 3",
                    DataPropertyName = "Value3",
                    Width = 60
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Value4",
                    HeaderText = "Value 4",
                    DataPropertyName = "Value4",
                    Width = 60
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "Value5",
                    HeaderText = "Value 5",
                    DataPropertyName = "Value5",
                    Width = 60
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "ArrayIndex",
                    HeaderText = "Array Index",
                    DataPropertyName = "ArrayIndex",
                    Width = 80,
                    DefaultCellStyle = new DataGridViewCellStyle { Alignment = DataGridViewContentAlignment.MiddleRight }
                },
                new DataGridViewTextBoxColumn
                {
                    Name = "SerialOffset",
                    HeaderText = "Serial Offset",
                    DataPropertyName = "SerialOffset",
                    Width = 80,
                    DefaultCellStyle = new DataGridViewCellStyle { Alignment = DataGridViewContentAlignment.MiddleRight }
                },
                new DataGridViewCheckBoxColumn
                {
                    Name = "IsZero",
                    HeaderText = "Is Zero",
                    DataPropertyName = "IsZero",
                    Width = 60
                }
            });

            // Improve grid appearance
            _dataGridView.EnableHeadersVisualStyles = false;
            _dataGridView.ColumnHeadersDefaultCellStyle.BackColor = Color.WhiteSmoke;
            _dataGridView.ColumnHeadersDefaultCellStyle.ForeColor = Color.Black;
            _dataGridView.ColumnHeadersDefaultCellStyle.SelectionBackColor = Color.WhiteSmoke;
            _dataGridView.ColumnHeadersDefaultCellStyle.SelectionForeColor = Color.Black;
            _dataGridView.ColumnHeadersDefaultCellStyle.Font = new Font(_dataGridView.Font, FontStyle.Regular);
            _dataGridView.RowHeadersVisible = false;
            _dataGridView.AlternatingRowsDefaultCellStyle.BackColor = Color.WhiteSmoke;

            // Create status strip
            _statusStrip = new StatusStrip
            {
                Dock = DockStyle.Bottom,
                SizingGrip = false
            };

            _statusLabel = new ToolStripStatusLabel
            {
                Spring = true,
                TextAlign = ContentAlignment.MiddleLeft
            };
            _statusStrip.Items.Add(_statusLabel);

            // Add controls to form
            this.Controls.Add(_dataGridView);
            this.Controls.Add(_statusStrip);
        }
        #endregion

        #region Setup Events
        private void SetupEvents()
        {
            this.FormClosing += (s, e) =>
            {
                if (_assetEditor != null)
                {
                    // TODO: Check for unsaved changes
                }
            };

            _dataGridView.CellValueChanged += (s, e) =>
            {
                if (e.RowIndex >= 0 && e.ColumnIndex >= 0)
                {
                    var entry = GetEntryFromGrid(e.RowIndex);
                    if (entry != null)
                    {
                        SetStatus($"Updated {entry.Name}");
                    }
                }
            };

            _dataGridView.DataError += (s, e) =>
            {
                SetStatus($"Error displaying data: {e.Exception.Message}");
                e.ThrowException = false;
            };
        }
        #endregion

        #region Open uasset file
        private async void OpenButton_Click(object sender, EventArgs e)
        {
            using (var openFileDialog = new OpenFileDialog())
            {
                openFileDialog.Filter = "UAsset files (*.uasset)|*.uasset|All files (*.*)|*.*";
                openFileDialog.FilterIndex = 1;

                if (openFileDialog.ShowDialog() == DialogResult.OK)
                {
                    try
                    {
                        await LoadAsset(openFileDialog.FileName);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"Error loading asset: {ex.Message}",
                            "Error",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Error);
                    }
                }
            }
        }
        #endregion

        #region Save Button
        private async void SaveButton_Click(object sender, EventArgs e)
        {
            try
            {
                SetControlsEnabled(false);
                SetStatus("Saving asset...");

                await _assetEditor.SaveAsset(_assetPath);
                SetStatus("Asset saved successfully");
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error saving asset: {ex.Message}",
                    "Error",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Error);
                SetStatus("Error saving asset");
            }
            finally
            {
                SetControlsEnabled(true);
            }
        }
        #endregion

        #region Form Close
        private void UAssetEditorForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (_assetEditor != null && _assetEditor.HasUnsavedChanges)
            {
                var result = MessageBox.Show("There are unsaved changes. Do you want to save before closing?",
                    "Unsaved Changes",
                    MessageBoxButtons.YesNoCancel,
                    MessageBoxIcon.Warning);

                switch (result)
                {
                    case DialogResult.Yes:
                        try
                        {
                            _assetEditor.SaveAsset(_assetPath);
                        }
                        catch (Exception ex)
                        {
                            MessageBox.Show($"Error saving asset: {ex.Message}",
                                "Error",
                                MessageBoxButtons.OK,
                                MessageBoxIcon.Error);
                            e.Cancel = true;
                        }
                        break;
                    case DialogResult.Cancel:
                        e.Cancel = true;
                        break;
                }
            }
        }
        #endregion

        #region Refresh Data Grid
        private void RefreshDataGrid()
        {
            if (_assetEditor == null) return;

            var entries = _assetEditor.GetTableEntries();
            var filteredEntries = FilterEntries(entries);
            var pagedEntries = PaginateEntries(filteredEntries);

            var bindingSource = new BindingSource();
            bindingSource.DataSource = pagedEntries;
            _dataGridView.DataSource = bindingSource;

            // Update page info
            var pageLabel = (Label)Controls.Find("pageLabel", false)[0];
            pageLabel.Text = $"Page {_currentPage} of {GetTotalPages(filteredEntries)}";

            // Enable/disable navigation buttons
            var prevButton = (Button)Controls.Find("prevButton", false)[0];
            var nextButton = (Button)Controls.Find("nextButton", false)[0];

            prevButton.Enabled = _currentPage > 1;
            nextButton.Enabled = _currentPage < GetTotalPages(filteredEntries);

            // Update save button state
            var saveButton = (Button)Controls.Find("saveButton", false)[0];
            saveButton.Enabled = _assetEditor != null;
        }
        #endregion

        #region GetSimplifiedName
        private string GetSimplifiedName(string fullName)
        {
            // Extract just the property name after the row number
            // Example: "Row 1.Property.SubProperty" becomes "Property"
            var match = System.Text.RegularExpressions.Regex.Match(fullName, @"Row \d+\.([^.]+)");
            return match.Success ? match.Groups[1].Value : fullName;
        }
        #endregion

        #region Filter Text Box
        private void FilterTextBox_TextChanged(object sender, EventArgs e)
        {
            var textBox = (TextBox)sender;
            _filterText = textBox.Text;
            _currentPage = 1; // Reset to first page when filter changes
            RefreshDataGrid();
        }
        #endregion

        #region Row Combo Box
        private void RowComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            var comboBox = (ComboBox)sender;
            if (comboBox.SelectedItem == null) return;

            string selectedText = comboBox.SelectedItem.ToString();
            if (int.TryParse(selectedText.Replace("Row ", ""), out int selectedRow))
            {
                _selectedRow = selectedRow;
                RefreshDataGrid();
            }
        }

        private void ClearRowSelection()
        {
            _selectedRow = -1;
            var rowComboBox = (ComboBox)Controls.Find("rowComboBox", false)[0];
            rowComboBox.SelectedIndex = -1;
            RefreshDataGrid();
        }
        #endregion

        #region Entries
        private List<AssetTableEntry> FilterEntries(List<AssetTableEntry> entries)
        {
            if (entries == null) return new List<AssetTableEntry>();

            // First apply row filter if selected
            if (_selectedRow >= 0)
            {
                entries = entries.Where(e => e.Name.StartsWith($"Row {_selectedRow}.")).ToList();
            }

            // Then apply text filter if any
            if (!string.IsNullOrWhiteSpace(_filterText))
            {
                entries = entries.Where(e =>
                    e.Name.Contains(_filterText, StringComparison.OrdinalIgnoreCase) ||
                    e.Value?.Contains(_filterText, StringComparison.OrdinalIgnoreCase) == true ||
                    e.Type?.Contains(_filterText, StringComparison.OrdinalIgnoreCase) == true ||
                    e.Variant?.Contains(_filterText, StringComparison.OrdinalIgnoreCase) == true
                ).ToList();
            }

            return entries;
        }

        private List<AssetTableEntry> PaginateEntries(List<AssetTableEntry> entries)
        {
            return entries
                .Skip((_currentPage - 1) * _itemsPerPage)
                .Take(_itemsPerPage)
                .ToList();
        }
        #endregion

        #region Back Button
        private void PrevButton_Click(object sender, EventArgs e)
        {
            if (_currentPage > 1)
            {
                _currentPage--;
                RefreshDataGrid();
            }
        }
        #endregion

        #region Next Button
        private void NextButton_Click(object sender, EventArgs e)
        {
            var totalPages = (int)Math.Ceiling(GetFilteredEntries().Count / (double)_itemsPerPage);
            if (_currentPage < totalPages)
            {
                _currentPage++;
                RefreshDataGrid();
            }
        }
        #endregion

        #region Items Per Page
        private void ItemsPerPageCombo_SelectedIndexChanged(object sender, EventArgs e)
        {
            _itemsPerPage = (int)((ComboBox)sender).SelectedItem;
            _currentPage = 1;
            RefreshDataGrid();
        }

        private int GetTotalPages(List<AssetTableEntry> entries)
        {
            return (int)Math.Ceiling((double)entries.Count / _itemsPerPage);
        }
        #endregion

        #region GetFilteredEntries
        private List<AssetTableEntry> GetFilteredEntries()
        {
            if (_assetEditor == null) return new List<AssetTableEntry>();
            return FilterEntries(_assetEditor.GetTableEntries());
        }
        #endregion

        #region Set Status
        private void SetStatus(string message)
        {
            if (_statusLabel.GetCurrentParent().InvokeRequired)
            {
                _statusLabel.GetCurrentParent().Invoke(new Action(() => _statusLabel.Text = message));
            }
            else
            {
                _statusLabel.Text = message;
            }
        }
        #endregion

        #region Set Controls
        private void SetControlsEnabled(bool enabled)
        {
            if (this.InvokeRequired)
            {
                this.Invoke(new Action(() => SetControlsEnabled(enabled)));
                return;
            }

            foreach (Control control in this.Controls)
            {
                if (control != _statusStrip)
                {
                    control.Enabled = enabled;
                }
            }
        }
        #endregion

        #region Get Entries
        private AssetTableEntry GetEntryFromGrid(int rowIndex)
        {
            var bindingSource = _dataGridView.DataSource as BindingSource;
            if (bindingSource?.DataSource is List<AssetTableEntry> entries && rowIndex >= 0 && rowIndex < entries.Count)
            {
                return entries[rowIndex];
            }
            return null;
        }
        #endregion

        #region Data Grid View
        private void DataGridView_CellBeginEdit(object sender, DataGridViewCellCancelEventArgs e)
        {
            if (e.ColumnIndex == _dataGridView.Columns["Value"]?.Index)
            {
                var entry = GetEntryFromGrid(e.RowIndex);
                if (entry != null && !entry.IsEditable)
                {
                    e.Cancel = true;
                }
            }
            else
            {
                e.Cancel = true; // Only allow editing the Value column
            }
        }

        private void DataGridView_CellEndEdit(object sender, DataGridViewCellEventArgs e)
        {
            if (e.ColumnIndex == _dataGridView.Columns["Value"]?.Index && e.RowIndex >= 0)
            {
                var newValue = _dataGridView.Rows[e.RowIndex].Cells[e.ColumnIndex].Value?.ToString();
                var entry = GetEntryFromGrid(e.RowIndex);
                if (entry != null)
                {
                    // Get the actual index in the full list
                    var allEntries = _assetEditor.GetTableEntries();
                    var actualIndex = allEntries.FindIndex(x => x == entry);
                    if (actualIndex >= 0)
                    {
                        _assetEditor.UpdateEntryValue(actualIndex, "Value", newValue ?? string.Empty);
                    }
                }
            }
        }
        #endregion
    }
}
