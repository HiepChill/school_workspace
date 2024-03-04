namespace Bai22
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
            label1 = new Label();
            label2 = new Label();
            txta = new TextBox();
            txtb = new TextBox();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(49, 53);
            label1.Name = "label1";
            label1.Size = new Size(31, 20);
            label1.TabIndex = 0;
            label1.Text = "a =";
            label1.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(49, 105);
            label2.Name = "label2";
            label2.Size = new Size(36, 20);
            label2.TabIndex = 1;
            label2.Text = "b = ";
            // 
            // txta
            // 
            txta.Location = new Point(102, 50);
            txta.Name = "txta";
            txta.Size = new Size(67, 27);
            txta.TabIndex = 2;
            txta.TextChanged += txta_TextChanged;
            // 
            // txtb
            // 
            txtb.Location = new Point(102, 102);
            txtb.Name = "txtb";
            txtb.Size = new Size(67, 27);
            txtb.TabIndex = 3;
            txtb.TextChanged += txtb_TextChanged;
            // 
            // button1
            // 
            button1.Location = new Point(193, 48);
            button1.Name = "button1";
            button1.Size = new Size(94, 46);
            button1.TabIndex = 4;
            button1.Text = "Xóa";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.Location = new Point(193, 100);
            button2.Name = "button2";
            button2.Size = new Size(94, 100);
            button2.TabIndex = 5;
            button2.Text = "Dừng";
            button2.UseVisualStyleBackColor = true;
            button2.Click += button2_Click;
            // 
            // button3
            // 
            button3.Location = new Point(49, 163);
            button3.Name = "button3";
            button3.Size = new Size(120, 37);
            button3.TabIndex = 6;
            button3.Text = "Hoán đổi";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(299, 263);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Controls.Add(txtb);
            Controls.Add(txta);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private TextBox txta;
        private TextBox txtb;
        private Button button1;
        private Button button2;
        private Button button3;
    }
}