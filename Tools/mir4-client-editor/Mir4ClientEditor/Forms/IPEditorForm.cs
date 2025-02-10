using System;
using System.IO;
using System.Windows.Forms;
using System.Text.RegularExpressions;
using System.Drawing;

namespace Mir4ClientEditor.Forms
{
    public partial class IPEditorForm : Form
    {
        private string _filePath;
        private const long FIRST_IP_OFFSET = 0x040DA298;
        private const long LOGIN_URL_OFFSET = 0x410A180;
        private const long SECOND_IP_OFFSET = 0x4EE65C8;
        private Icon _currentIcon;

        public IPEditorForm()
        {
            InitializeComponent();
        }

        #region InitializeComponent
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(IPEditorForm));
            selectFileButton = new Button();
            firstIPTextBox = new TextBox();
            loginUrlTextBox = new TextBox();
            secondIPTextBox = new TextBox();
            saveButton = new Button();
            firstIPLabel = new Label();
            loginUrlLabel = new Label();
            secondIPLabel = new Label();
            currentFirstIPLabel = new Label();
            currentLoginUrlLabel = new Label();
            currentSecondIPLabel = new Label();
            iconPictureBox = new PictureBox();
            changeIconButton = new Button();
            iconGroupBox = new GroupBox();
            ((System.ComponentModel.ISupportInitialize)iconPictureBox).BeginInit();
            iconGroupBox.SuspendLayout();
            SuspendLayout();
            // 
            // selectFileButton
            // 
            selectFileButton.Location = new Point(12, 12);
            selectFileButton.Name = "selectFileButton";
            selectFileButton.Size = new Size(360, 23);
            selectFileButton.TabIndex = 0;
            selectFileButton.Text = "Select Executable";
            selectFileButton.Click += SelectFileButton_Click;
            // 
            // firstIPTextBox
            // 
            firstIPTextBox.Location = new Point(12, 88);
            firstIPTextBox.Name = "firstIPTextBox";
            firstIPTextBox.PlaceholderText = "e.g., 192.168.1.1";
            firstIPTextBox.Size = new Size(360, 23);
            firstIPTextBox.TabIndex = 3;
            // 
            // loginUrlTextBox
            // 
            loginUrlTextBox.Location = new Point(12, 163);
            loginUrlTextBox.Name = "loginUrlTextBox";
            loginUrlTextBox.PlaceholderText = "e.g., http://server:7000/login";
            loginUrlTextBox.Size = new Size(360, 23);
            loginUrlTextBox.TabIndex = 6;
            // 
            // secondIPTextBox
            // 
            secondIPTextBox.Location = new Point(12, 238);
            secondIPTextBox.Name = "secondIPTextBox";
            secondIPTextBox.PlaceholderText = "e.g., 192.168.1.1";
            secondIPTextBox.Size = new Size(360, 23);
            secondIPTextBox.TabIndex = 9;
            // 
            // saveButton
            // 
            saveButton.Enabled = false;
            saveButton.Location = new Point(12, 420);
            saveButton.Name = "saveButton";
            saveButton.Size = new Size(360, 23);
            saveButton.TabIndex = 10;
            saveButton.Text = "Save Changes";
            saveButton.Click += SaveButton_Click;
            // 
            // firstIPLabel
            // 
            firstIPLabel.AutoSize = true;
            firstIPLabel.Location = new Point(12, 70);
            firstIPLabel.Name = "firstIPLabel";
            firstIPLabel.Size = new Size(117, 15);
            firstIPLabel.TabIndex = 2;
            firstIPLabel.Text = "New First IP Address:";
            // 
            // loginUrlLabel
            // 
            loginUrlLabel.AutoSize = true;
            loginUrlLabel.Location = new Point(12, 145);
            loginUrlLabel.Name = "loginUrlLabel";
            loginUrlLabel.Size = new Size(91, 15);
            loginUrlLabel.TabIndex = 5;
            loginUrlLabel.Text = "New Login URL:";
            // 
            // secondIPLabel
            // 
            secondIPLabel.AutoSize = true;
            secondIPLabel.Location = new Point(12, 220);
            secondIPLabel.Name = "secondIPLabel";
            secondIPLabel.Size = new Size(134, 15);
            secondIPLabel.TabIndex = 8;
            secondIPLabel.Text = "New Second IP Address:";
            // 
            // currentFirstIPLabel
            // 
            currentFirstIPLabel.AutoSize = true;
            currentFirstIPLabel.Location = new Point(12, 45);
            currentFirstIPLabel.Name = "currentFirstIPLabel";
            currentFirstIPLabel.Size = new Size(91, 15);
            currentFirstIPLabel.TabIndex = 1;
            currentFirstIPLabel.Text = "Current First IP: ";
            // 
            // currentLoginUrlLabel
            // 
            currentLoginUrlLabel.AutoSize = true;
            currentLoginUrlLabel.Location = new Point(12, 120);
            currentLoginUrlLabel.Name = "currentLoginUrlLabel";
            currentLoginUrlLabel.Size = new Size(110, 15);
            currentLoginUrlLabel.TabIndex = 4;
            currentLoginUrlLabel.Text = "Current Login URL: ";
            // 
            // currentSecondIPLabel
            // 
            currentSecondIPLabel.AutoSize = true;
            currentSecondIPLabel.Location = new Point(12, 195);
            currentSecondIPLabel.Name = "currentSecondIPLabel";
            currentSecondIPLabel.Size = new Size(108, 15);
            currentSecondIPLabel.TabIndex = 7;
            currentSecondIPLabel.Text = "Current Second IP: ";
            // 
            // iconPictureBox
            // 
            iconPictureBox.BorderStyle = BorderStyle.FixedSingle;
            iconPictureBox.Location = new Point(10, 20);
            iconPictureBox.Name = "iconPictureBox";
            iconPictureBox.Size = new Size(96, 96);
            iconPictureBox.SizeMode = PictureBoxSizeMode.StretchImage;
            iconPictureBox.TabIndex = 0;
            iconPictureBox.TabStop = false;
            // 
            // changeIconButton
            // 
            changeIconButton.Enabled = false;
            changeIconButton.Location = new Point(120, 55);
            changeIconButton.Name = "changeIconButton";
            changeIconButton.Size = new Size(220, 23);
            changeIconButton.TabIndex = 1;
            changeIconButton.Text = "Change Icon";
            changeIconButton.Click += ChangeIconButton_Click;
            // 
            // iconGroupBox
            // 
            iconGroupBox.Controls.Add(iconPictureBox);
            iconGroupBox.Controls.Add(changeIconButton);
            iconGroupBox.Location = new Point(12, 275);
            iconGroupBox.Name = "iconGroupBox";
            iconGroupBox.Size = new Size(360, 130);
            iconGroupBox.TabIndex = 5;
            iconGroupBox.TabStop = false;
            iconGroupBox.Text = "Executable Icon";
            // 
            // IPEditorForm
            // 
            ClientSize = new Size(384, 465);
            Controls.Add(selectFileButton);
            Controls.Add(currentFirstIPLabel);
            Controls.Add(firstIPLabel);
            Controls.Add(firstIPTextBox);
            Controls.Add(currentLoginUrlLabel);
            Controls.Add(loginUrlLabel);
            Controls.Add(loginUrlTextBox);
            Controls.Add(currentSecondIPLabel);
            Controls.Add(secondIPLabel);
            Controls.Add(secondIPTextBox);
            Controls.Add(iconGroupBox);
            Controls.Add(saveButton);
            FormBorderStyle = FormBorderStyle.FixedDialog;
            Icon = (Icon)resources.GetObject("$this.Icon");
            MaximizeBox = false;
            Name = "IPEditorForm";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Main Editor";
            ((System.ComponentModel.ISupportInitialize)iconPictureBox).EndInit();
            iconGroupBox.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }
        #endregion

        #region Select Client EXE
        private void SelectFileButton_Click(object sender, EventArgs e)
        {
            using (OpenFileDialog openFileDialog = new OpenFileDialog())
            {
                openFileDialog.Filter = "Executable files (*.exe)|*.exe|All files (*.*)|*.*";
                openFileDialog.FilterIndex = 1;

                if (openFileDialog.ShowDialog() == DialogResult.OK)
                {
                    _filePath = openFileDialog.FileName;
                    ReadCurrentValues();
                    LoadExecutableIcon();
                    saveButton.Enabled = true;
                    changeIconButton.Enabled = true;
                }
            }
        }

        private void LoadExecutableIcon()
        {
            try
            {
                _currentIcon = Icon.ExtractAssociatedIcon(_filePath);
                if (_currentIcon != null)
                {
                    iconPictureBox.Image = _currentIcon.ToBitmap();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error loading icon: {ex.Message}", "Error",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void ChangeIconButton_Click(object sender, EventArgs e)
        {
            using (OpenFileDialog openFileDialog = new OpenFileDialog())
            {
                openFileDialog.Filter = "Icon files (*.ico)|*.ico|All files (*.*)|*.*";
                openFileDialog.FilterIndex = 1;

                if (openFileDialog.ShowDialog() == DialogResult.OK)
                {
                    try
                    {
                        // Load the new icon
                        IconChanger.ChangeIcon(_filePath, openFileDialog.FileName);
                        
                        // Refresh the displayed icon
                        LoadExecutableIcon();
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show($"Error changing icon: {ex.Message}", "Error",
                            MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }
            }
        }
        #endregion

        #region Read Values
        private void ReadCurrentValues()
        {
            try
            {
                using (FileStream fs = new FileStream(_filePath, FileMode.Open, FileAccess.Read))
                {
                    if (SECOND_IP_OFFSET >= fs.Length)
                    {
                        MessageBox.Show("Invalid executable file.", "Error",
                            MessageBoxButtons.OK, MessageBoxIcon.Error);
                        return;
                    }

                    // Read First IP
                    fs.Position = FIRST_IP_OFFSET;
                    byte[] firstIPBytes = new byte[15];
                    fs.Read(firstIPBytes, 0, firstIPBytes.Length);
                    string firstIP = System.Text.Encoding.ASCII.GetString(firstIPBytes).Trim('\0');

                    // Read Login URL
                    fs.Position = LOGIN_URL_OFFSET;
                    byte[] loginUrlBytes = new byte[50];
                    fs.Read(loginUrlBytes, 0, loginUrlBytes.Length);
                    string loginUrl = System.Text.Encoding.ASCII.GetString(loginUrlBytes).Trim('\0');

                    // Read Second IP
                    fs.Position = SECOND_IP_OFFSET;
                    byte[] secondIPBytes = new byte[15];
                    fs.Read(secondIPBytes, 0, secondIPBytes.Length);
                    string secondIP = System.Text.Encoding.ASCII.GetString(secondIPBytes).Trim('\0');

                    bool isSupported = IsValidIPAddress(firstIP) && IsValidIPAddress(secondIP);
                    if (!isSupported)
                    {
                        MessageBox.Show("This client version is not supported.\nNo valid IP/URL found at the expected locations.",
                            "Unsupported Client", MessageBoxButtons.OK, MessageBoxIcon.Error);
                        saveButton.Enabled = false;
                        return;
                    }

                    // Update labels and set default values in textboxes
                    currentFirstIPLabel.Text = $"Current First IP: {firstIP}";
                    currentLoginUrlLabel.Text = $"Current Login URL: {loginUrl}";
                    currentSecondIPLabel.Text = $"Current Second IP: {secondIP}";

                    // Set default values in textboxes
                    firstIPTextBox.Text = firstIP;
                    loginUrlTextBox.Text = loginUrl;
                    secondIPTextBox.Text = secondIP;
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error reading values: {ex.Message}", "Error",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        #endregion

        #region Save Button
        private void SaveButton_Click(object sender, EventArgs e)
        {
            try
            {
                if (!ValidateInputs())
                    return;

                using (FileStream fs = new FileStream(_filePath, FileMode.Open, FileAccess.ReadWrite))
                {
                    // Write First IP
                    if (!string.IsNullOrWhiteSpace(firstIPTextBox.Text))
                    {
                        fs.Position = FIRST_IP_OFFSET;
                        byte[] firstIPBytes = System.Text.Encoding.ASCII.GetBytes(firstIPTextBox.Text);
                        fs.Write(firstIPBytes, 0, firstIPBytes.Length);
                    }

                    // Write Login URL
                    if (!string.IsNullOrWhiteSpace(loginUrlTextBox.Text))
                    {
                        fs.Position = LOGIN_URL_OFFSET;
                        byte[] loginUrlBytes = System.Text.Encoding.ASCII.GetBytes(loginUrlTextBox.Text);
                        fs.Write(loginUrlBytes, 0, loginUrlBytes.Length);
                    }

                    // Write Second IP
                    if (!string.IsNullOrWhiteSpace(secondIPTextBox.Text))
                    {
                        fs.Position = SECOND_IP_OFFSET;
                        byte[] secondIPBytes = System.Text.Encoding.ASCII.GetBytes(secondIPTextBox.Text);
                        fs.Write(secondIPBytes, 0, secondIPBytes.Length);
                    }
                }

                MessageBox.Show("Values successfully updated!", "Success",
                    MessageBoxButtons.OK, MessageBoxIcon.Information);
                ReadCurrentValues(); // Refresh displayed values
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error updating values: {ex.Message}", "Error",
                    MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        #endregion

        #region Validate Inputs
        private bool ValidateInputs()
        {
            // Only validate non-empty inputs
            if (!string.IsNullOrWhiteSpace(firstIPTextBox.Text) && !IsValidIPAddress(firstIPTextBox.Text))
            {
                MessageBox.Show("Please enter a valid IP address for First IP.\nFormat: xxx.xxx.xxx.xxx\nRange: 0.0.0.0 to 255.255.255.255",
                    "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return false;
            }

            if (!string.IsNullOrWhiteSpace(loginUrlTextBox.Text) && !IsValidLoginUrl(loginUrlTextBox.Text))
            {
                MessageBox.Show("Please enter a valid login URL.\nFormat: http://server:port/login",
                    "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return false;
            }

            if (!string.IsNullOrWhiteSpace(secondIPTextBox.Text) && !IsValidIPAddress(secondIPTextBox.Text))
            {
                MessageBox.Show("Please enter a valid IP address for Second IP.\nFormat: xxx.xxx.xxx.xxx\nRange: 0.0.0.0 to 255.255.255.255",
                    "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return false;
            }

            // Ensure at least one field is filled
            if (string.IsNullOrWhiteSpace(firstIPTextBox.Text) &&
                string.IsNullOrWhiteSpace(loginUrlTextBox.Text) &&
                string.IsNullOrWhiteSpace(secondIPTextBox.Text))
            {
                MessageBox.Show("Please enter at least one value to update.",
                    "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return false;
            }

            return true;
        }

        private bool IsValidIPAddress(string ipAddress)
        {
            if (string.IsNullOrWhiteSpace(ipAddress))
                return false;

            string[] parts = ipAddress.Split('.');
            if (parts.Length != 4)
                return false;

            foreach (string part in parts)
            {
                if (!int.TryParse(part, out int value) || value < 0 || value > 255)
                    return false;
            }

            return true;
        }

        private bool IsValidLoginUrl(string url)
        {
            if (string.IsNullOrWhiteSpace(url))
                return false;

            // Basic URL validation for http://server:port/login format
            return Regex.IsMatch(url, @"^http://[^/]+:\d+/login$");
        }
        #endregion

        private Button selectFileButton;
        private TextBox firstIPTextBox;
        private TextBox loginUrlTextBox;
        private TextBox secondIPTextBox;
        private Button saveButton;
        private Label firstIPLabel;
        private Label loginUrlLabel;
        private Label secondIPLabel;
        private Label currentFirstIPLabel;
        private Label currentLoginUrlLabel;
        private Label currentSecondIPLabel;
        private PictureBox iconPictureBox;
        private Button changeIconButton;
        private GroupBox iconGroupBox;
    }

    #region Icon
    // Helper class to change executable icons
    public static class IconChanger
    {
        [System.Runtime.InteropServices.DllImport("kernel32.dll", SetLastError = true)]
        private static extern IntPtr BeginUpdateResource(string pFileName, bool bDeleteExistingResources);

        [System.Runtime.InteropServices.DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool EndUpdateResource(IntPtr hUpdate, bool fDiscard);

        [System.Runtime.InteropServices.DllImport("kernel32.dll", SetLastError = true)]
        private static extern bool UpdateResource(IntPtr hUpdate, IntPtr lpType, IntPtr lpName,
            ushort wLanguage, byte[] lpData, uint cbData);

        private static readonly IntPtr RT_ICON = (IntPtr)3;
        private static readonly IntPtr RT_GROUP_ICON = (IntPtr)14;

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential)]
        public struct ICONDIR
        {
            public ushort Reserved;
            public ushort Type;
            public ushort Count;
        }

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential)]
        public struct ICONDIRENTRY
        {
            public byte Width;
            public byte Height;
            public byte ColorCount;
            public byte Reserved;
            public ushort Planes;
            public ushort BitCount;
            public uint BytesInRes;
            public uint ImageOffset;
        }

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential)]
        public struct GRPICONDIRENTRY
        {
            public byte Width;
            public byte Height;
            public byte ColorCount;
            public byte Reserved;
            public ushort Planes;
            public ushort BitCount;
            public uint BytesInRes;
            public ushort ID;
        }

        public static void ChangeIcon(string exePath, string icoPath)
        {
            try
            {
                byte[] icoFile = File.ReadAllBytes(icoPath);
                IntPtr hUpdate = BeginUpdateResource(exePath, false);
                
                if (hUpdate == IntPtr.Zero)
                    throw new Exception("Could not begin resource update");

                try
                {
                    int offset = 0;
                    ICONDIR iconDir = new ICONDIR();
                    
                    // Read ICONDIR
                    iconDir.Reserved = BitConverter.ToUInt16(icoFile, offset);
                    iconDir.Type = BitConverter.ToUInt16(icoFile, offset + 2);
                    iconDir.Count = BitConverter.ToUInt16(icoFile, offset + 4);
                    offset += 6;

                    if (iconDir.Type != 1)
                        throw new Exception("Invalid icon file format");

                    // Read entries
                    ICONDIRENTRY[] entries = new ICONDIRENTRY[iconDir.Count];
                    GRPICONDIRENTRY[] grpEntries = new GRPICONDIRENTRY[iconDir.Count];

                    for (int i = 0; i < iconDir.Count; i++)
                    {
                        entries[i] = new ICONDIRENTRY
                        {
                            Width = icoFile[offset],
                            Height = icoFile[offset + 1],
                            ColorCount = icoFile[offset + 2],
                            Reserved = icoFile[offset + 3],
                            Planes = BitConverter.ToUInt16(icoFile, offset + 4),
                            BitCount = BitConverter.ToUInt16(icoFile, offset + 6),
                            BytesInRes = BitConverter.ToUInt32(icoFile, offset + 8),
                            ImageOffset = BitConverter.ToUInt32(icoFile, offset + 12)
                        };

                        grpEntries[i] = new GRPICONDIRENTRY
                        {
                            Width = entries[i].Width,
                            Height = entries[i].Height,
                            ColorCount = entries[i].ColorCount,
                            Reserved = entries[i].Reserved,
                            Planes = entries[i].Planes,
                            BitCount = entries[i].BitCount,
                            BytesInRes = entries[i].BytesInRes,
                            ID = (ushort)(i + 1)
                        };

                        offset += 16;
                    }

                    // Create group icon directory
                    using (MemoryStream ms = new MemoryStream())
                    using (BinaryWriter writer = new BinaryWriter(ms))
                    {
                        writer.Write(iconDir.Reserved);
                        writer.Write(iconDir.Type);
                        writer.Write(iconDir.Count);

                        int baseOffset = 6 + iconDir.Count * 14;
                        for (int i = 0; i < iconDir.Count; i++)
                        {
                            writer.Write(grpEntries[i].Width);
                            writer.Write(grpEntries[i].Height);
                            writer.Write(grpEntries[i].ColorCount);
                            writer.Write(grpEntries[i].Reserved);
                            writer.Write(grpEntries[i].Planes);
                            writer.Write(grpEntries[i].BitCount);
                            writer.Write(grpEntries[i].BytesInRes);
                            writer.Write(grpEntries[i].ID);
                        }

                        byte[] grpData = ms.ToArray();
                        if (!UpdateResource(hUpdate, RT_GROUP_ICON, (IntPtr)1, 0, grpData, (uint)grpData.Length))
                            throw new Exception("Could not update group icon");
                    }

                    // Write icon images
                    for (int i = 0; i < iconDir.Count; i++)
                    {
                        byte[] imgData = new byte[entries[i].BytesInRes];
                        Array.Copy(icoFile, entries[i].ImageOffset, imgData, 0, entries[i].BytesInRes);

                        if (!UpdateResource(hUpdate, RT_ICON, (IntPtr)(i + 1), 0, imgData, entries[i].BytesInRes))
                            throw new Exception($"Could not update icon image {i + 1}");
                    }

                    if (!EndUpdateResource(hUpdate, false))
                        throw new Exception("Could not commit icon update");
                }
                catch
                {
                    EndUpdateResource(hUpdate, true);
                    throw;
                }
            }
            catch (Exception ex)
            {
                throw new Exception($"Failed to change icon: {ex.Message}", ex);
            }
        }
    }
    #endregion
}
