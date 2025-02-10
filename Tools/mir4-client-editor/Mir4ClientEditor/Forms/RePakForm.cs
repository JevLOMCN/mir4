using System;
using System.IO;
using System.Windows.Forms;
using System.Diagnostics;

namespace Mir4ClientEditor.Forms
{
    public partial class RePakForm : Form
    {
        private string selectedFolder = string.Empty;

        public RePakForm()
        {
            InitializeComponent();
        }

        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(RePakForm));
            selectFolderButton = new Button();
            folderPathTextBox = new TextBox();
            includeBakFilesCheckBox = new CheckBox();
            useCompressionCheckBox = new CheckBox();
            deleteExportCheckBox = new CheckBox();
            createPakButton = new Button();
            logTextBox = new RichTextBox();
            SuspendLayout();
            // 
            // selectFolderButton
            // 
            selectFolderButton.Location = new Point(12, 12);
            selectFolderButton.Name = "selectFolderButton";
            selectFolderButton.Size = new Size(100, 23);
            selectFolderButton.TabIndex = 0;
            selectFolderButton.Text = "Select Folder";
            selectFolderButton.Click += SelectFolderButton_Click;
            // 
            // folderPathTextBox
            // 
            folderPathTextBox.Location = new Point(118, 14);
            folderPathTextBox.Name = "folderPathTextBox";
            folderPathTextBox.ReadOnly = true;
            folderPathTextBox.Size = new Size(400, 23);
            folderPathTextBox.TabIndex = 1;
            // 
            // includeBakFilesCheckBox
            // 
            includeBakFilesCheckBox.Location = new Point(12, 65);
            includeBakFilesCheckBox.Name = "includeBakFilesCheckBox";
            includeBakFilesCheckBox.Size = new Size(200, 24);
            includeBakFilesCheckBox.TabIndex = 4;
            includeBakFilesCheckBox.Text = "Include .bak Files";
            // 
            // useCompressionCheckBox
            // 
            useCompressionCheckBox.Checked = true;
            useCompressionCheckBox.CheckState = CheckState.Checked;
            useCompressionCheckBox.Location = new Point(12, 41);
            useCompressionCheckBox.Name = "useCompressionCheckBox";
            useCompressionCheckBox.Size = new Size(200, 24);
            useCompressionCheckBox.TabIndex = 2;
            useCompressionCheckBox.Text = "Use Compression";
            // 
            // deleteExportCheckBox
            // 
            deleteExportCheckBox.Checked = true;
            deleteExportCheckBox.CheckState = CheckState.Checked;
            deleteExportCheckBox.Location = new Point(212, 41);
            deleteExportCheckBox.Name = "deleteExportCheckBox";
            deleteExportCheckBox.Size = new Size(200, 24);
            deleteExportCheckBox.TabIndex = 3;
            deleteExportCheckBox.Text = "Delete Export After RePak";
            // 
            // createPakButton
            // 
            createPakButton.Location = new Point(12, 89);
            createPakButton.Name = "createPakButton";
            createPakButton.Size = new Size(506, 30);
            createPakButton.TabIndex = 5;
            createPakButton.Text = "Create PAK";
            createPakButton.Click += CreatePakButton_Click;
            // 
            // logTextBox
            // 
            logTextBox.BackColor = Color.Black;
            logTextBox.Font = new Font("Consolas", 9.75F);
            logTextBox.ForeColor = Color.Lime;
            logTextBox.Location = new Point(12, 125);
            logTextBox.Name = "logTextBox";
            logTextBox.ReadOnly = true;
            logTextBox.Size = new Size(506, 200);
            logTextBox.TabIndex = 6;
            logTextBox.Text = "";
            logTextBox.WordWrap = false;
            // 
            // RePakForm
            // 
            ClientSize = new Size(530, 334);
            Controls.Add(selectFolderButton);
            Controls.Add(folderPathTextBox);
            Controls.Add(useCompressionCheckBox);
            Controls.Add(deleteExportCheckBox);
            Controls.Add(includeBakFilesCheckBox);
            Controls.Add(createPakButton);
            Controls.Add(logTextBox);
            FormBorderStyle = FormBorderStyle.FixedDialog;
            Icon = (Icon)resources.GetObject("$this.Icon");
            MaximizeBox = false;
            Name = "RePakForm";
            Text = "RePak System";
            ResumeLayout(false);
            PerformLayout();
        }

        private Button selectFolderButton;
        private TextBox folderPathTextBox;
        private CheckBox includeBakFilesCheckBox;
        private CheckBox useCompressionCheckBox;
        private CheckBox deleteExportCheckBox;
        private Button createPakButton;
        private RichTextBox logTextBox;

        #region Select Export Folder
        private void SelectFolderButton_Click(object sender, EventArgs e)
        {
            using (FolderBrowserDialog folderDialog = new FolderBrowserDialog())
            {
                if (folderDialog.ShowDialog() == DialogResult.OK)
                {
                    selectedFolder = folderDialog.SelectedPath;
                    folderPathTextBox.Text = selectedFolder;
                }
            }
        }
        #endregion

        #region Create PAK
        private async void CreatePakButton_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(selectedFolder))
            {
                MessageBox.Show("Please select a folder first!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            createPakButton.Enabled = false;
            string originalName = string.Empty;
            string tempMirMobileDir = string.Empty;

            try
            {
                logTextBox.Clear();
                AppendLog("Starting pak creation process...");

                string currentDirectory = AppDomain.CurrentDomain.BaseDirectory;
                string fileListPath = Path.Combine(currentDirectory, "filelist.txt");
                string unrealPakPath = Path.Combine(currentDirectory, "UnrealPak.exe");

                // Check for UnrealPak.exe first
                if (!File.Exists(unrealPakPath))
                {
                    MessageBox.Show("UnrealPak.exe not found in the application directory!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }

                string parentDir = Path.GetDirectoryName(selectedFolder);
                tempMirMobileDir = Path.Combine(parentDir, "MirMobile-WindowsNoEditor");
                originalName = selectedFolder;

                // If MirMobile-WindowsNoEditor already exists, delete it
                if (Directory.Exists(tempMirMobileDir) && !tempMirMobileDir.Equals(selectedFolder, StringComparison.OrdinalIgnoreCase))
                {
                    try
                    {
                        AppendLog("Removing existing MirMobile-WindowsNoEditor directory...");
                        await Task.Run(() => Directory.Delete(tempMirMobileDir, true));
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"Failed to delete existing MirMobile-WindowsNoEditor directory: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                        return;
                    }
                }

                // Rename the selected folder to MirMobile-WindowsNoEditor
                if (!tempMirMobileDir.Equals(selectedFolder, StringComparison.OrdinalIgnoreCase))
                {
                    try
                    {
                        AppendLog("Renaming folder to MirMobile-WindowsNoEditor...");
                        await Task.Run(() => Directory.Move(selectedFolder, tempMirMobileDir));
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"Failed to rename directory: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                        return;
                    }
                }

                // Create filelist.txt
                try
                {
                    AppendLog("Creating filelist.txt...");
                    string fileListContent = $"\"{tempMirMobileDir}\\*.*\" \"..\\..\\..\\*.*\"";
                    if (!includeBakFilesCheckBox.Checked)
                    {
                        fileListContent += "\n-\"*.bak\"";
                        AppendLog("Excluding .bak files from pak...");
                    }
                    AppendLog($"Filelist content:\n{fileListContent}");
                    await File.WriteAllTextAsync(fileListPath, fileListContent);
                }
                catch (Exception ex)
                {
                    if (!tempMirMobileDir.Equals(originalName, StringComparison.OrdinalIgnoreCase))
                    {
                        try { await Task.Run(() => Directory.Move(tempMirMobileDir, originalName)); } catch { }
                    }
                    MessageBox.Show($"Failed to create filelist.txt: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    return;
                }

                // Create the pak file
                string pakFileName = Path.Combine(parentDir, "MirMobile-WindowsNoEditor.pak");
                string arguments = useCompressionCheckBox.Checked
                    ? $"\"{pakFileName}\" -create=\"{fileListPath}\" -compress"
                    : $"\"{pakFileName}\" -create=\"{fileListPath}\"";

                AppendLog($"Running UnrealPak.exe{(useCompressionCheckBox.Checked ? " with compression" : "")}...");
                AppendLog($"Command: {unrealPakPath} {arguments}");

                ProcessStartInfo startInfo = new ProcessStartInfo
                {
                    FileName = unrealPakPath,
                    Arguments = arguments,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    RedirectStandardError = true,
                    CreateNoWindow = true,
                    WorkingDirectory = currentDirectory
                };

                AppendLog($"Working directory: {currentDirectory}");
                AppendLog($"Full command: {startInfo.FileName} {startInfo.Arguments}");

                using (Process process = new Process { StartInfo = startInfo })
                {
                    process.Start();

                    // Create tasks to read output and error streams asynchronously
                    var readOutputTask = Task.Run(async () =>
                    {
                        using (StreamReader reader = process.StandardOutput)
                        {
                            while (!reader.EndOfStream)
                            {
                                string line = await reader.ReadLineAsync();
                                if (!string.IsNullOrEmpty(line))
                                {
                                    AppendLog(line.Trim());
                                }
                            }
                        }
                    });

                    var readErrorTask = Task.Run(async () =>
                    {
                        using (StreamReader reader = process.StandardError)
                        {
                            while (!reader.EndOfStream)
                            {
                                string line = await reader.ReadLineAsync();
                                if (!string.IsNullOrEmpty(line))
                                {
                                    AppendLog("ERROR: " + line.Trim());
                                }
                            }
                        }
                    });

                    // Wait for the process to complete and output to be read
                    await Task.WhenAll(
                        Task.Run(() => process.WaitForExit()),
                        readOutputTask,
                        readErrorTask
                    );

                    if (process.ExitCode == 0)
                    {
                        AppendLog("PAK file created successfully!");
                        MessageBox.Show("PAK file created successfully!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);

                        // Delete the export folder if requested
                        if (deleteExportCheckBox.Checked)
                        {
                            try
                            {
                                AppendLog("Deleting export folder...");
                                await Task.Run(() => Directory.Delete(tempMirMobileDir, true));
                                AppendLog("Export folder deleted successfully!");
                            }
                            catch (Exception ex)
                            {
                                AppendLog($"Warning: Failed to delete export folder: {ex.Message}");
                                MessageBox.Show($"Warning: Failed to delete export folder: {ex.Message}",
                                    "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                            }
                        }
                    }
                    else
                    {
                        AppendLog("Error creating PAK file!");
                        MessageBox.Show("Error creating PAK file!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }

                if (!deleteExportCheckBox.Checked)
                {
                    // Restore the original folder name
                    if (!tempMirMobileDir.Equals(originalName, StringComparison.OrdinalIgnoreCase))
                    {
                        try
                        {
                            AppendLog("Restoring original folder name...");
                            await Task.Run(() => Directory.Move(tempMirMobileDir, originalName));
                        }
                        catch (Exception ex)
                        {
                            MessageBox.Show($"Warning: Failed to restore original folder name: {ex.Message}", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                        }
                    }
                }

                AppendLog("Process completed!");
            }
            catch (Exception ex)
            {
                AppendLog($"Error: {ex.Message}");
                MessageBox.Show($"Error: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                // Try to restore the original folder name if something went wrong
                if (!string.IsNullOrEmpty(tempMirMobileDir) && !string.IsNullOrEmpty(originalName) &&
                    !tempMirMobileDir.Equals(originalName, StringComparison.OrdinalIgnoreCase))
                {
                    try
                    {
                        await Task.Run(() => Directory.Move(tempMirMobileDir, originalName));
                    }
                    catch { /* Ignore cleanup errors */ }
                }
            }
            finally
            {
                createPakButton.Enabled = true;
            }
        }
        #endregion

        #region Append Log
        private void AppendLog(string message)
        {
            if (InvokeRequired)
            {
                Invoke(new Action<string>(AppendLog), message);
                return;
            }

            logTextBox.AppendText(DateTime.Now.ToString("HH:mm:ss") + ": " + message + Environment.NewLine);
            logTextBox.ScrollToCaret();
        }
        #endregion
    }
}
