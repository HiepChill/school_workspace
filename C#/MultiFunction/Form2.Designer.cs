namespace MultiFunctionApp
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            txtPort = new TextBox();
            label3 = new Label();
            btnConnect = new Button();
            txtHost = new TextBox();
            label2 = new Label();
            txtMessage = new TextBox();
            btnSend = new Button();
            txtStatus = new TextBox();
            SuspendLayout();
            // 
            // txtPort
            // 
            txtPort.Location = new Point(271, 18);
            txtPort.Name = "txtPort";
            txtPort.Size = new Size(45, 23);
            txtPort.TabIndex = 9;
            txtPort.Text = "8080";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(211, 21);
            label3.Name = "label3";
            label3.Size = new Size(32, 15);
            label3.TabIndex = 8;
            label3.Text = "Port:";
            // 
            // btnConnect
            // 
            btnConnect.Location = new Point(349, 18);
            btnConnect.Name = "btnConnect";
            btnConnect.Size = new Size(75, 23);
            btnConnect.TabIndex = 7;
            btnConnect.Text = "Connect";
            btnConnect.UseVisualStyleBackColor = true;
            btnConnect.Click += btnConnect_Click;
            // 
            // txtHost
            // 
            txtHost.Location = new Point(82, 18);
            txtHost.Name = "txtHost";
            txtHost.Size = new Size(100, 23);
            txtHost.TabIndex = 6;
            txtHost.Text = "192.168.1.79";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(22, 21);
            label2.Name = "label2";
            label2.Size = new Size(35, 15);
            label2.TabIndex = 5;
            label2.Text = "Host:";
            // 
            // txtMessage
            // 
            txtMessage.Location = new Point(82, 57);
            txtMessage.Multiline = true;
            txtMessage.Name = "txtMessage";
            txtMessage.Size = new Size(424, 62);
            txtMessage.TabIndex = 10;
            // 
            // btnSend
            // 
            btnSend.Location = new Point(431, 125);
            btnSend.Name = "btnSend";
            btnSend.Size = new Size(75, 23);
            btnSend.TabIndex = 11;
            btnSend.Text = "Send";
            btnSend.UseVisualStyleBackColor = true;
            btnSend.Click += btnSend_Click;
            // 
            // txtStatus
            // 
            txtStatus.Location = new Point(82, 154);
            txtStatus.Multiline = true;
            txtStatus.Name = "txtStatus";
            txtStatus.Size = new Size(424, 136);
            txtStatus.TabIndex = 12;
            // 
            // Form2
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(547, 319);
            Controls.Add(txtStatus);
            Controls.Add(btnSend);
            Controls.Add(txtMessage);
            Controls.Add(txtPort);
            Controls.Add(label3);
            Controls.Add(btnConnect);
            Controls.Add(txtHost);
            Controls.Add(label2);
            Name = "Form2";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Client";
            Load += Form2_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox txtPort;
        private Label label3;
        private Button btnConnect;
        private TextBox txtHost;
        private Label label2;
        private TextBox txtMessage;
        private Button btnSend;
        private TextBox txtStatus;
    }
}