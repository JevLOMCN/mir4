namespace Mir4ClientEditor
{
    partial class MainForm
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            extractButton = new Button();
            editButton = new Button();
            repakButton = new Button();
            statusLabel = new Label();
            editIPButton = new Button();
            linkLabel1 = new LinkLabel();
            SuspendLayout();
            // 
            // extractButton
            // 
            extractButton.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            extractButton.Location = new Point(12, 12);
            extractButton.Name = "extractButton";
            extractButton.Size = new Size(576, 55);
            extractButton.TabIndex = 0;
            extractButton.Text = "1. Export PAK(s)";
            extractButton.UseVisualStyleBackColor = true;
            extractButton.Click += extractButton_Click_1;
            // 
            // editButton
            // 
            editButton.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            editButton.Location = new Point(12, 73);
            editButton.Name = "editButton";
            editButton.Size = new Size(576, 55);
            editButton.TabIndex = 1;
            editButton.Text = "2. Edit UAsset Files";
            editButton.UseVisualStyleBackColor = true;
            editButton.Click += EditUAssetButton_Click;
            // 
            // repakButton
            // 
            repakButton.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            repakButton.Location = new Point(12, 134);
            repakButton.Name = "repakButton";
            repakButton.Size = new Size(576, 55);
            repakButton.TabIndex = 2;
            repakButton.Text = "3. RePak";
            repakButton.UseVisualStyleBackColor = true;
            repakButton.Click += RePakButton_Click;
            // 
            // statusLabel
            // 
            statusLabel.AutoSize = true;
            statusLabel.Location = new Point(12, 257);
            statusLabel.Name = "statusLabel";
            statusLabel.Size = new Size(45, 15);
            statusLabel.TabIndex = 4;
            statusLabel.Text = "Status: ";
            // 
            // editIPButton
            // 
            editIPButton.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            editIPButton.Location = new Point(12, 195);
            editIPButton.Name = "editIPButton";
            editIPButton.Size = new Size(576, 55);
            editIPButton.TabIndex = 3;
            editIPButton.Text = "4. Executable Editor";
            editIPButton.UseVisualStyleBackColor = true;
            editIPButton.Click += EditIPButton_Click;
            // 
            // linkLabel1
            // 
            linkLabel1.AutoSize = true;
            linkLabel1.Location = new Point(442, 258);
            linkLabel1.Name = "linkLabel1";
            linkLabel1.Size = new Size(146, 15);
            linkLabel1.TabIndex = 5;
            linkLabel1.TabStop = true;
            linkLabel1.Text = "Export/Edit/RePak Tutorial";
            linkLabel1.LinkClicked += linkLabel1_LinkClicked;
            // 
            // MainForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(600, 282);
            Controls.Add(linkLabel1);
            Controls.Add(statusLabel);
            Controls.Add(editIPButton);
            Controls.Add(repakButton);
            Controls.Add(editButton);
            Controls.Add(extractButton);
            Icon = (Icon)resources.GetObject("$this.Icon");
            Name = "MainForm";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Mir4 Client Editor";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private System.Windows.Forms.Button extractButton;
        private System.Windows.Forms.Button editButton;
        private System.Windows.Forms.Button repakButton;
        private System.Windows.Forms.Label statusLabel;
        private System.Windows.Forms.Button editIPButton;
        private LinkLabel linkLabel1;
    }
}
