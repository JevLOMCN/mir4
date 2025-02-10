using System;
using System.Windows.Forms;
using System.Drawing;
using System.IO;
using Mir4ClientEditor.Core;
using Mir4ClientEditor.Forms;

namespace Mir4ClientEditor
{
    public partial class MainForm : Form
    {
        private PakManager? _pakManager;

        public MainForm()
        {
            InitializeComponent();
        }

        #region Buttons Enable
        private void SetButtonsEnabled(bool enabled)
        {
            if (InvokeRequired)
            {
                Invoke(new Action(() => SetButtonsEnabled(enabled)));
                return;
            }

            if (extractButton != null) extractButton.Enabled = enabled;
            if (editButton != null) editButton.Enabled = enabled;
            if (repakButton != null) repakButton.Enabled = enabled;
        }
        #endregion

        #region Edit PAK
        private void EditUAssetButton_Click(object sender, EventArgs e)
        {
            try
            {
                UpdateStatus("Opening UAsset editor...");
                var editorForm = new UAssetEditorForm();
                editorForm.Show();
                UpdateStatus("Ready");
            }
            catch (Exception ex)
            {
                UpdateStatus("Error opening editor");
                MessageBox.Show($"Error opening UAsset editor: {ex.Message}", "Error",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        #endregion

        #region Edit IP
        private void EditIPButton_Click(object sender, EventArgs e)
        {
            try
            {
                UpdateStatus("Opening IP editor...");
                var ipEditorForm = new IPEditorForm();
                ipEditorForm.Show();
                UpdateStatus("Ready");
            }
            catch (Exception ex)
            {
                UpdateStatus("Error opening editor");
                MessageBox.Show($"Error opening IP editor: {ex.Message}", "Error",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        #endregion

        #region Repak
        private void RePakButton_Click(object sender, EventArgs e)
        {
            var rePakForm = new RePakForm();
            rePakForm.ShowDialog();
        }
        #endregion

        #region Status Label
        private void UpdateStatus(string message)
        {
            if (statusLabel != null && !IsDisposed)
            {
                if (InvokeRequired)
                {
                    Invoke(new Action(() => statusLabel.Text = message));
                }
                else
                {
                    statusLabel.Text = message;
                }
            }
        }
        #endregion

        #region Extract/Export
        private async void extractButton_Click_1(object sender, EventArgs e)
        {
            using (var folderDialog = new FolderBrowserDialog())
            {
                folderDialog.Description = "Select Mir4 Client Directory (containing .pak files)";
                if (folderDialog.ShowDialog() == DialogResult.OK)
                {
                    string clientPath = folderDialog.SelectedPath;

                    // Verify if the selected folder contains .pak files
                    if (!Directory.GetFiles(clientPath, "*.pak", SearchOption.AllDirectories).Any())
                    {
                        MessageBox.Show("No .pak files found in the selected directory. Please select the correct Mir4 client directory.",
                            "No PAK Files Found", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                        return;
                    }

                    UpdateStatus("Initializing PAK manager...");
                    SetButtonsEnabled(false);

                    try
                    {
                        _pakManager = new PakManager(clientPath);
                        await _pakManager.Initialize();

                        using (var outputDialog = new FolderBrowserDialog())
                        {
                            outputDialog.Description = "Select Output Directory for Extracted Files";
                            if (outputDialog.ShowDialog() == DialogResult.OK)
                            {
                                UpdateStatus("Extracting files...");
                                await _pakManager.ExtractPak(outputDialog.SelectedPath);
                                UpdateStatus("Files extracted successfully!");
                                MessageBox.Show("Files have been extracted successfully!", "Success",
                                    MessageBoxButtons.OK, MessageBoxIcon.Information);
                            }
                        }
                    }
                    catch (Exception ex)
                    {
                        UpdateStatus("Error extracting files");
                        MessageBox.Show($"Error extracting files: {ex.Message}", "Error",
                            MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                    finally
                    {
                        SetButtonsEnabled(true);
                        UpdateStatus("Ready");
                    }
                }
            }
        }
        #endregion
    }
}
