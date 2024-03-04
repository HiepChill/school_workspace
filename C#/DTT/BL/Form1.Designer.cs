namespace BL
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
            title = new Label();
            label1 = new Label();
            txtName = new TextBox();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            txtDate = new TextBox();
            txtMonth = new TextBox();
            txtYear = new TextBox();
            label5 = new Label();
            label6 = new Label();
            dv = new ListBox();
            listBox1 = new ListBox();
            button1 = new Button();
            button3 = new Button();
            button2 = new Button();
            txtResult = new TextBox();
            SuspendLayout();
            // 
            // title
            // 
            title.Anchor = AnchorStyles.Top;
            title.AutoSize = true;
            title.Font = new Font("Segoe UI", 26.25F, FontStyle.Bold, GraphicsUnit.Point);
            title.ForeColor = Color.Red;
            title.Location = new Point(103, 9);
            title.Name = "title";
            title.Size = new Size(346, 47);
            title.TabIndex = 0;
            title.Text = "Dịch Vụ Khám Bệnh";
            title.TextAlign = ContentAlignment.TopCenter;
            title.Click += title_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point);
            label1.Location = new Point(74, 80);
            label1.Name = "label1";
            label1.Size = new Size(109, 15);
            label1.TabIndex = 1;
            label1.Text = "Họ tên bệnh nhân :";
            // 
            // txtName
            // 
            txtName.Location = new Point(194, 77);
            txtName.Name = "txtName";
            txtName.Size = new Size(277, 23);
            txtName.TabIndex = 2;
            txtName.TextChanged += txtName_TextChanged;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(74, 138);
            label2.Name = "label2";
            label2.Size = new Size(35, 15);
            label2.TabIndex = 3;
            label2.Text = "Ngày";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(216, 138);
            label3.Name = "label3";
            label3.Size = new Size(40, 15);
            label3.TabIndex = 4;
            label3.Text = "Tháng";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(367, 138);
            label4.Name = "label4";
            label4.Size = new Size(33, 15);
            label4.TabIndex = 5;
            label4.Text = "Năm";
            // 
            // txtDate
            // 
            txtDate.Location = new Point(124, 135);
            txtDate.Name = "txtDate";
            txtDate.Size = new Size(40, 23);
            txtDate.TabIndex = 6;
            txtDate.TextChanged += txtDate_TextChanged;
            // 
            // txtMonth
            // 
            txtMonth.Location = new Point(273, 135);
            txtMonth.Name = "txtMonth";
            txtMonth.Size = new Size(40, 23);
            txtMonth.TabIndex = 7;
            // 
            // txtYear
            // 
            txtYear.Location = new Point(415, 135);
            txtYear.Name = "txtYear";
            txtYear.Size = new Size(56, 23);
            txtYear.TabIndex = 8;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(74, 186);
            label5.Name = "label5";
            label5.Size = new Size(78, 15);
            label5.TabIndex = 9;
            label5.Text = "Chọn dịch vụ";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(363, 186);
            label6.Name = "label6";
            label6.Size = new Size(108, 15);
            label6.TabIndex = 10;
            label6.Text = "Danh sách đã chọn";
            // 
            // dv
            // 
            dv.FormattingEnabled = true;
            dv.ItemHeight = 15;
            dv.Items.AddRange(new object[] { "Siêu âm", "Thử máy", "Nội soi", "X-Quang" });
            dv.Location = new Point(74, 214);
            dv.Name = "dv";
            dv.Size = new Size(120, 94);
            dv.TabIndex = 11;
            dv.SelectedIndexChanged += dv_SelectedIndexChanged;
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.ItemHeight = 15;
            listBox1.Location = new Point(351, 214);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(120, 94);
            listBox1.TabIndex = 12;
            // 
            // button1
            // 
            button1.Location = new Point(74, 335);
            button1.Name = "button1";
            button1.Size = new Size(75, 23);
            button1.TabIndex = 13;
            button1.Text = "Chọn";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button3
            // 
            button3.Location = new Point(396, 335);
            button3.Name = "button3";
            button3.Size = new Size(75, 23);
            button3.TabIndex = 15;
            button3.Text = "Thoát";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // button2
            // 
            button2.Location = new Point(238, 335);
            button2.Name = "button2";
            button2.Size = new Size(75, 23);
            button2.TabIndex = 16;
            button2.Text = "Reset";
            button2.UseVisualStyleBackColor = true;
            button2.Click += button2_Click;
            // 
            // txtResult
            // 
            txtResult.Location = new Point(74, 395);
            txtResult.Multiline = true;
            txtResult.Name = "txtResult";
            txtResult.ReadOnly = true;
            txtResult.Size = new Size(397, 118);
            txtResult.TabIndex = 17;
            txtResult.TextChanged += textBox1_TextChanged;
            // 
            // Form1
            // 
            AcceptButton = button1;
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.GradientActiveCaption;
            CancelButton = button2;
            ClientSize = new Size(560, 525);
            Controls.Add(txtResult);
            Controls.Add(button2);
            Controls.Add(button3);
            Controls.Add(button1);
            Controls.Add(listBox1);
            Controls.Add(dv);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(txtYear);
            Controls.Add(txtMonth);
            Controls.Add(txtDate);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(txtName);
            Controls.Add(label1);
            Controls.Add(title);
            ForeColor = SystemColors.Desktop;
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Dịch vụ khám bệnh";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label title;
        private Label label1;
        private TextBox txtName;
        private Label label2;
        private Label label3;
        private Label label4;
        private TextBox txtDate;
        private TextBox txtMonth;
        private TextBox txtYear;
        private Label label5;
        private Label label6;
        private ListBox dv;
        private ListBox listBox1;
        private Button button1;
        private Button button3;
        private Button button2;
        private TextBox txtResult;
    }
}