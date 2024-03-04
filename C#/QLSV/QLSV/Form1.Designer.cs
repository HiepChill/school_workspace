namespace QLSV
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
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            label6 = new Label();
            label7 = new Label();
            txtId = new TextBox();
            txtFName = new TextBox();
            txtLName = new TextBox();
            dob = new DateTimePicker();
            radio1 = new RadioButton();
            radio2 = new RadioButton();
            boxId = new ComboBox();
            dgSV = new DataGridView();
            btnAdd = new Button();
            btnFix = new Button();
            btnDelete = new Button();
            btnSave = new Button();
            btnExit = new Button();
            ((System.ComponentModel.ISupportInitialize)dgSV).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.Anchor = AnchorStyles.Top;
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point);
            label1.ImageAlign = ContentAlignment.TopCenter;
            label1.Location = new Point(200, 9);
            label1.Name = "label1";
            label1.Size = new Size(382, 32);
            label1.TabIndex = 0;
            label1.Text = "Chương Trình Quản Lý Sinh Viên";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(70, 75);
            label2.Name = "label2";
            label2.Size = new Size(74, 15);
            label2.TabIndex = 1;
            label2.Text = "Mã sinh viên";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(70, 149);
            label3.Name = "label3";
            label3.Size = new Size(60, 15);
            label3.TabIndex = 2;
            label3.Text = "Ngày sinh";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(299, 75);
            label4.Name = "label4";
            label4.Size = new Size(73, 15);
            label4.TabIndex = 3;
            label4.Text = "Họ sinh viên";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(299, 149);
            label5.Name = "label5";
            label5.Size = new Size(52, 15);
            label5.TabIndex = 4;
            label5.Text = "Giới tính";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(548, 75);
            label6.Name = "label6";
            label6.Size = new Size(75, 15);
            label6.TabIndex = 5;
            label6.Text = "Tên sinh viên";
            label6.Click += label6_Click;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(548, 149);
            label7.Name = "label7";
            label7.Size = new Size(53, 15);
            label7.TabIndex = 6;
            label7.Text = "Mã khoa";
            // 
            // txtId
            // 
            txtId.Location = new Point(150, 72);
            txtId.Name = "txtId";
            txtId.Size = new Size(121, 23);
            txtId.TabIndex = 7;
            // 
            // txtFName
            // 
            txtFName.Location = new Point(378, 72);
            txtFName.Name = "txtFName";
            txtFName.Size = new Size(137, 23);
            txtFName.TabIndex = 8;
            // 
            // txtLName
            // 
            txtLName.Location = new Point(629, 72);
            txtLName.Name = "txtLName";
            txtLName.Size = new Size(130, 23);
            txtLName.TabIndex = 9;
            // 
            // dob
            // 
            dob.CustomFormat = "dd/MM/yyyy";
            dob.Format = DateTimePickerFormat.Custom;
            dob.Location = new Point(150, 143);
            dob.Name = "dob";
            dob.Size = new Size(121, 23);
            dob.TabIndex = 10;
            // 
            // radio1
            // 
            radio1.AutoSize = true;
            radio1.Location = new Point(378, 147);
            radio1.Name = "radio1";
            radio1.Size = new Size(51, 19);
            radio1.TabIndex = 11;
            radio1.TabStop = true;
            radio1.Text = "Nam";
            radio1.UseVisualStyleBackColor = true;
            // 
            // radio2
            // 
            radio2.AutoSize = true;
            radio2.Location = new Point(436, 147);
            radio2.Name = "radio2";
            radio2.Size = new Size(41, 19);
            radio2.TabIndex = 12;
            radio2.TabStop = true;
            radio2.Text = "Nữ";
            radio2.UseVisualStyleBackColor = true;
            // 
            // boxId
            // 
            boxId.FormattingEnabled = true;
            boxId.Items.AddRange(new object[] { "CNTT", "TTNT", "HTTT", "CNPM" });
            boxId.Location = new Point(629, 146);
            boxId.Name = "boxId";
            boxId.Size = new Size(130, 23);
            boxId.TabIndex = 13;
            // 
            // dgSV
            // 
            dgSV.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgSV.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgSV.Location = new Point(70, 190);
            dgSV.Name = "dgSV";
            dgSV.RowTemplate.Height = 25;
            dgSV.Size = new Size(689, 223);
            dgSV.TabIndex = 14;
            dgSV.CellClick += dgSV_CellClick;
            // 
            // btnAdd
            // 
            btnAdd.Location = new Point(123, 452);
            btnAdd.Name = "btnAdd";
            btnAdd.Size = new Size(71, 22);
            btnAdd.TabIndex = 15;
            btnAdd.Text = "Thêm";
            btnAdd.UseVisualStyleBackColor = true;
            btnAdd.Click += btnAdd_Click;
            // 
            // btnFix
            // 
            btnFix.Location = new Point(247, 452);
            btnFix.Name = "btnFix";
            btnFix.Size = new Size(75, 23);
            btnFix.TabIndex = 16;
            btnFix.Text = "Sửa";
            btnFix.UseVisualStyleBackColor = true;
            btnFix.Click += btnFix_Click;
            // 
            // btnDelete
            // 
            btnDelete.Location = new Point(378, 452);
            btnDelete.Name = "btnDelete";
            btnDelete.Size = new Size(75, 23);
            btnDelete.TabIndex = 17;
            btnDelete.Text = "Xóa";
            btnDelete.UseVisualStyleBackColor = true;
            btnDelete.Click += btnDelete_Click;
            // 
            // btnSave
            // 
            btnSave.Location = new Point(507, 451);
            btnSave.Name = "btnSave";
            btnSave.Size = new Size(75, 23);
            btnSave.TabIndex = 18;
            btnSave.Text = "Lưu";
            btnSave.UseVisualStyleBackColor = true;
            btnSave.Click += btnSave_Click;
            // 
            // btnExit
            // 
            btnExit.Location = new Point(629, 452);
            btnExit.Name = "btnExit";
            btnExit.Size = new Size(75, 23);
            btnExit.TabIndex = 19;
            btnExit.Text = "Thoát";
            btnExit.UseVisualStyleBackColor = true;
            btnExit.Click += btnExit_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 503);
            Controls.Add(btnExit);
            Controls.Add(btnSave);
            Controls.Add(btnDelete);
            Controls.Add(btnFix);
            Controls.Add(btnAdd);
            Controls.Add(dgSV);
            Controls.Add(boxId);
            Controls.Add(radio2);
            Controls.Add(radio1);
            Controls.Add(dob);
            Controls.Add(txtLName);
            Controls.Add(txtFName);
            Controls.Add(txtId);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Form1";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)dgSV).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private Label label6;
        private Label label7;
        private TextBox txtId;
        private TextBox txtFName;
        private TextBox txtLName;
        private DateTimePicker dob;
        private RadioButton radio1;
        private RadioButton radio2;
        private ComboBox boxId;
        private DataGridView dgSV;
        private Button btnAdd;
        private Button btnFix;
        private Button btnDelete;
        private Button btnSave;
        private Button btnExit;
    }
}