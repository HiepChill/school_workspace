namespace FileExplorer
{
    partial class Form1
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
            components = new System.ComponentModel.Container();
            imageList = new ImageList(components);
            timer1 = new System.Windows.Forms.Timer(components);
            tabControl1 = new TabControl();
            tabPage1 = new TabPage();
            lblStatus = new Label();
            label1 = new Label();
            txtPath = new TextBox();
            listView = new ListView();
            btnOpen = new Button();
            tabPage2 = new TabPage();
            btnRecord = new Button();
            pictureBox = new PictureBox();
            btnCapture = new Button();
            tabPage3 = new TabPage();
            txtStatus = new TextBox();
            btnStop = new Button();
            txtPort = new TextBox();
            label3 = new Label();
            btnStart = new Button();
            txtHost = new TextBox();
            label2 = new Label();
            tabControl1.SuspendLayout();
            tabPage1.SuspendLayout();
            tabPage2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)pictureBox).BeginInit();
            tabPage3.SuspendLayout();
            SuspendLayout();
            // 
            // imageList
            // 
            imageList.ColorDepth = ColorDepth.Depth32Bit;
            imageList.ImageSize = new Size(32, 32);
            imageList.TransparentColor = Color.Transparent;
            // 
            // timer1
            // 
            timer1.Interval = 1000;
            timer1.Tick += timer1_Tick;
            // 
            // tabControl1
            // 
            tabControl1.Controls.Add(tabPage1);
            tabControl1.Controls.Add(tabPage2);
            tabControl1.Controls.Add(tabPage3);
            tabControl1.Location = new Point(-2, -1);
            tabControl1.Name = "tabControl1";
            tabControl1.SelectedIndex = 0;
            tabControl1.Size = new Size(803, 451);
            tabControl1.TabIndex = 0;
            // 
            // tabPage1
            // 
            tabPage1.Controls.Add(lblStatus);
            tabPage1.Controls.Add(label1);
            tabPage1.Controls.Add(txtPath);
            tabPage1.Controls.Add(listView);
            tabPage1.Controls.Add(btnOpen);
            tabPage1.Location = new Point(4, 24);
            tabPage1.Name = "tabPage1";
            tabPage1.Padding = new Padding(3);
            tabPage1.Size = new Size(795, 423);
            tabPage1.TabIndex = 0;
            tabPage1.Text = "File Explorer";
            tabPage1.UseVisualStyleBackColor = true;
            // 
            // lblStatus
            // 
            lblStatus.AutoSize = true;
            lblStatus.Font = new Font("Segoe UI", 15F, FontStyle.Bold, GraphicsUnit.Point);
            lblStatus.ForeColor = Color.Blue;
            lblStatus.Location = new Point(658, 3);
            lblStatus.Name = "lblStatus";
            lblStatus.Size = new Size(94, 28);
            lblStatus.TabIndex = 10;
            lblStatus.Text = "00:00:00";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(8, 388);
            label1.Name = "label1";
            label1.Size = new Size(34, 15);
            label1.TabIndex = 9;
            label1.Text = "Path:";
            // 
            // txtPath
            // 
            txtPath.Location = new Point(63, 385);
            txtPath.Name = "txtPath";
            txtPath.Size = new Size(617, 23);
            txtPath.TabIndex = 8;
            // 
            // listView
            // 
            listView.LargeImageList = imageList;
            listView.Location = new Point(8, 34);
            listView.MultiSelect = false;
            listView.Name = "listView";
            listView.Size = new Size(776, 333);
            listView.TabIndex = 7;
            listView.UseCompatibleStateImageBehavior = false;
            listView.SelectedIndexChanged += listView_SelectedIndexChanged;
            // 
            // btnOpen
            // 
            btnOpen.Location = new Point(701, 385);
            btnOpen.Name = "btnOpen";
            btnOpen.Size = new Size(83, 23);
            btnOpen.TabIndex = 6;
            btnOpen.Text = "Open";
            btnOpen.UseVisualStyleBackColor = true;
            btnOpen.Click += btnOpen_Click;
            // 
            // tabPage2
            // 
            tabPage2.Controls.Add(btnRecord);
            tabPage2.Controls.Add(pictureBox);
            tabPage2.Controls.Add(btnCapture);
            tabPage2.Location = new Point(4, 24);
            tabPage2.Name = "tabPage2";
            tabPage2.Padding = new Padding(3);
            tabPage2.Size = new Size(795, 423);
            tabPage2.TabIndex = 1;
            tabPage2.Text = "Screen Capture";
            tabPage2.UseVisualStyleBackColor = true;
            // 
            // btnRecord
            // 
            btnRecord.Location = new Point(702, 55);
            btnRecord.Name = "btnRecord";
            btnRecord.Size = new Size(84, 33);
            btnRecord.TabIndex = 2;
            btnRecord.Text = "Record";
            btnRecord.UseVisualStyleBackColor = true;
            btnRecord.Click += btnRecord_Click;
            // 
            // pictureBox
            // 
            pictureBox.BorderStyle = BorderStyle.Fixed3D;
            pictureBox.Location = new Point(10, 6);
            pictureBox.Name = "pictureBox";
            pictureBox.Size = new Size(686, 409);
            pictureBox.SizeMode = PictureBoxSizeMode.StretchImage;
            pictureBox.TabIndex = 1;
            pictureBox.TabStop = false;
            // 
            // btnCapture
            // 
            btnCapture.Location = new Point(702, 6);
            btnCapture.Name = "btnCapture";
            btnCapture.Size = new Size(84, 31);
            btnCapture.TabIndex = 0;
            btnCapture.Text = "Capture";
            btnCapture.UseVisualStyleBackColor = true;
            btnCapture.Click += btnCapture_Click;
            // 
            // tabPage3
            // 
            tabPage3.Controls.Add(txtStatus);
            tabPage3.Controls.Add(btnStop);
            tabPage3.Controls.Add(txtPort);
            tabPage3.Controls.Add(label3);
            tabPage3.Controls.Add(btnStart);
            tabPage3.Controls.Add(txtHost);
            tabPage3.Controls.Add(label2);
            tabPage3.Location = new Point(4, 24);
            tabPage3.Name = "tabPage3";
            tabPage3.Padding = new Padding(3);
            tabPage3.Size = new Size(795, 423);
            tabPage3.TabIndex = 2;
            tabPage3.Text = "Server";
            tabPage3.UseVisualStyleBackColor = true;
            // 
            // txtStatus
            // 
            txtStatus.Location = new Point(92, 74);
            txtStatus.Multiline = true;
            txtStatus.Name = "txtStatus";
            txtStatus.Size = new Size(438, 195);
            txtStatus.TabIndex = 6;
            // 
            // btnStop
            // 
            btnStop.Location = new Point(455, 30);
            btnStop.Name = "btnStop";
            btnStop.Size = new Size(75, 23);
            btnStop.TabIndex = 5;
            btnStop.Text = "Stop";
            btnStop.UseVisualStyleBackColor = true;
            btnStop.Click += btnStop_Click;
            // 
            // txtPort
            // 
            txtPort.Location = new Point(281, 30);
            txtPort.Name = "txtPort";
            txtPort.Size = new Size(45, 23);
            txtPort.TabIndex = 4;
            txtPort.Text = "8080";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(221, 33);
            label3.Name = "label3";
            label3.Size = new Size(32, 15);
            label3.TabIndex = 3;
            label3.Text = "Port:";
            // 
            // btnStart
            // 
            btnStart.Location = new Point(359, 30);
            btnStart.Name = "btnStart";
            btnStart.Size = new Size(75, 23);
            btnStart.TabIndex = 2;
            btnStart.Text = "Start";
            btnStart.UseVisualStyleBackColor = true;
            btnStart.Click += btnStart_Click;
            // 
            // txtHost
            // 
            txtHost.Location = new Point(92, 30);
            txtHost.Name = "txtHost";
            txtHost.Size = new Size(100, 23);
            txtHost.TabIndex = 1;
            txtHost.Text = "192.168.1.79";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(32, 33);
            label2.Name = "label2";
            label2.Size = new Size(35, 15);
            label2.TabIndex = 0;
            label2.Text = "Host:";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(tabControl1);
            Name = "Form1";
            Text = "MultiFunctionApp";
            Load += Form1_Load;
            tabControl1.ResumeLayout(false);
            tabPage1.ResumeLayout(false);
            tabPage1.PerformLayout();
            tabPage2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)pictureBox).EndInit();
            tabPage3.ResumeLayout(false);
            tabPage3.PerformLayout();
            ResumeLayout(false);
        }

        #endregion
        private ImageList imageList;
        private System.Windows.Forms.Timer timer1;
        private TabControl tabControl1;
        private TabPage tabPage1;
        private Label lblStatus;
        private Label label1;
        private TextBox txtPath;
        private ListView listView;
        private Button btnOpen;
        private TabPage tabPage2;
        private PictureBox pictureBox;
        private Button btnCapture;
        private TabPage tabPage3;
        private Button btnRecord;
        private Button btnStart;
        private TextBox txtHost;
        private Label label2;
        private Button btnStop;
        private TextBox txtPort;
        private Label label3;
        private TextBox txtStatus;
    }
}