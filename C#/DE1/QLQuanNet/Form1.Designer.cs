namespace QLQuanNet
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
            groupBox1 = new GroupBox();
            dgSach = new DataGridView();
            btnSearch = new Button();
            txtSearch = new TextBox();
            label1 = new Label();
            groupBox2 = new GroupBox();
            btnClose = new Button();
            btnDelete = new Button();
            btnFix = new Button();
            btnAdd = new Button();
            txtType = new ComboBox();
            txtDis = new RichTextBox();
            txtPrice = new TextBox();
            txtAuthor = new TextBox();
            txtName = new TextBox();
            txtId = new TextBox();
            label7 = new Label();
            label6 = new Label();
            label5 = new Label();
            label4 = new Label();
            label3 = new Label();
            label2 = new Label();
            groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)dgSach).BeginInit();
            groupBox2.SuspendLayout();
            SuspendLayout();
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(dgSach);
            groupBox1.Controls.Add(btnSearch);
            groupBox1.Controls.Add(txtSearch);
            groupBox1.Controls.Add(label1);
            groupBox1.Location = new Point(3, 2);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(634, 516);
            groupBox1.TabIndex = 0;
            groupBox1.TabStop = false;
            groupBox1.Text = "Tìm kiếm";
            // 
            // dgSach
            // 
            dgSach.AllowUserToAddRows = false;
            dgSach.AllowUserToDeleteRows = false;
            dgSach.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgSach.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dgSach.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgSach.Location = new Point(9, 163);
            dgSach.Name = "dgSach";
            dgSach.ReadOnly = true;
            dgSach.RowTemplate.Height = 25;
            dgSach.Size = new Size(610, 342);
            dgSach.TabIndex = 3;
            dgSach.CellClick += dgSach_CellClick;
            // 
            // btnSearch
            // 
            btnSearch.Location = new Point(122, 93);
            btnSearch.Name = "btnSearch";
            btnSearch.Size = new Size(103, 31);
            btnSearch.TabIndex = 2;
            btnSearch.Text = "Tìm kiếm";
            btnSearch.UseVisualStyleBackColor = true;
            btnSearch.Click += btnSearch_Click;
            // 
            // txtSearch
            // 
            txtSearch.Location = new Point(122, 50);
            txtSearch.Name = "txtSearch";
            txtSearch.Size = new Size(229, 23);
            txtSearch.TabIndex = 1;
            txtSearch.TextChanged += textBox1_TextChanged;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(41, 53);
            label1.Name = "label1";
            label1.Size = new Size(52, 15);
            label1.TabIndex = 0;
            label1.Text = "Tên sách";
            // 
            // groupBox2
            // 
            groupBox2.Controls.Add(btnClose);
            groupBox2.Controls.Add(btnDelete);
            groupBox2.Controls.Add(btnFix);
            groupBox2.Controls.Add(btnAdd);
            groupBox2.Controls.Add(txtType);
            groupBox2.Controls.Add(txtDis);
            groupBox2.Controls.Add(txtPrice);
            groupBox2.Controls.Add(txtAuthor);
            groupBox2.Controls.Add(txtName);
            groupBox2.Controls.Add(txtId);
            groupBox2.Controls.Add(label7);
            groupBox2.Controls.Add(label6);
            groupBox2.Controls.Add(label5);
            groupBox2.Controls.Add(label4);
            groupBox2.Controls.Add(label3);
            groupBox2.Controls.Add(label2);
            groupBox2.Location = new Point(643, 2);
            groupBox2.Name = "groupBox2";
            groupBox2.Size = new Size(389, 516);
            groupBox2.TabIndex = 1;
            groupBox2.TabStop = false;
            groupBox2.Text = "Quản lý sách";
            // 
            // btnClose
            // 
            btnClose.Location = new Point(231, 466);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(80, 30);
            btnClose.TabIndex = 15;
            btnClose.Text = "Đóng";
            btnClose.UseVisualStyleBackColor = true;
            btnClose.Click += button5_Click;
            // 
            // btnDelete
            // 
            btnDelete.Location = new Point(88, 466);
            btnDelete.Name = "btnDelete";
            btnDelete.Size = new Size(82, 30);
            btnDelete.TabIndex = 14;
            btnDelete.Text = "Xóa";
            btnDelete.UseVisualStyleBackColor = true;
            btnDelete.Click += btnDelete_Click;
            // 
            // btnFix
            // 
            btnFix.Location = new Point(231, 417);
            btnFix.Name = "btnFix";
            btnFix.Size = new Size(80, 34);
            btnFix.TabIndex = 13;
            btnFix.Text = "Sửa";
            btnFix.UseVisualStyleBackColor = true;
            btnFix.Click += btnFix_Click;
            // 
            // btnAdd
            // 
            btnAdd.Location = new Point(88, 417);
            btnAdd.Name = "btnAdd";
            btnAdd.Size = new Size(82, 34);
            btnAdd.TabIndex = 12;
            btnAdd.Text = "Thêm";
            btnAdd.UseVisualStyleBackColor = true;
            btnAdd.Click += btnAdd_Click;
            // 
            // txtType
            // 
            txtType.FormattingEnabled = true;
            txtType.Items.AddRange(new object[] { "Trinh thám", "Kinh dị", "Truyện tranh" });
            txtType.Location = new Point(144, 188);
            txtType.Name = "txtType";
            txtType.Size = new Size(192, 23);
            txtType.TabIndex = 11;
            // 
            // txtDis
            // 
            txtDis.Location = new Point(144, 289);
            txtDis.Name = "txtDis";
            txtDis.Size = new Size(192, 81);
            txtDis.TabIndex = 10;
            txtDis.Text = "";
            txtDis.TextChanged += richTextBox1_TextChanged;
            // 
            // txtPrice
            // 
            txtPrice.Location = new Point(144, 238);
            txtPrice.Name = "txtPrice";
            txtPrice.Size = new Size(192, 23);
            txtPrice.TabIndex = 9;
            txtPrice.TextChanged += txtPrice_TextChanged;
            // 
            // txtAuthor
            // 
            txtAuthor.Location = new Point(144, 143);
            txtAuthor.Name = "txtAuthor";
            txtAuthor.Size = new Size(192, 23);
            txtAuthor.TabIndex = 8;
            // 
            // txtName
            // 
            txtName.Location = new Point(144, 98);
            txtName.Name = "txtName";
            txtName.Size = new Size(192, 23);
            txtName.TabIndex = 7;
            // 
            // txtId
            // 
            txtId.Location = new Point(144, 58);
            txtId.Name = "txtId";
            txtId.Size = new Size(192, 23);
            txtId.TabIndex = 6;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(54, 289);
            label7.Name = "label7";
            label7.Size = new Size(38, 15);
            label7.TabIndex = 5;
            label7.Text = "Mô tả";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(54, 241);
            label6.Name = "label6";
            label6.Size = new Size(48, 15);
            label6.TabIndex = 4;
            label6.Text = "Đơn giá";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(54, 191);
            label5.Name = "label5";
            label5.Size = new Size(48, 15);
            label5.TabIndex = 3;
            label5.Text = "Thể loại";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(54, 146);
            label4.Name = "label4";
            label4.Size = new Size(43, 15);
            label4.TabIndex = 2;
            label4.Text = "Tác giả";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(54, 101);
            label3.Name = "label3";
            label3.Size = new Size(52, 15);
            label3.TabIndex = 1;
            label3.Text = "Tên sách";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(54, 61);
            label2.Name = "label2";
            label2.Size = new Size(51, 15);
            label2.TabIndex = 0;
            label2.Text = "Mã sách";
            // 
            // Form1
            // 
            AcceptButton = btnAdd;
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            CancelButton = btnClose;
            ClientSize = new Size(1033, 519);
            Controls.Add(groupBox2);
            Controls.Add(groupBox1);
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Quản lý sách";
            Load += Form1_Load;
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)dgSach).EndInit();
            groupBox2.ResumeLayout(false);
            groupBox2.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private GroupBox groupBox1;
        private TextBox txtSearch;
        private Label label1;
        private GroupBox groupBox2;
        private RichTextBox txtDis;
        private TextBox txtPrice;
        private TextBox txtAuthor;
        private TextBox txtName;
        private TextBox txtId;
        private Label label7;
        private Label label6;
        private Label label5;
        private Label label4;
        private Label label3;
        private Label label2;
        private DataGridView dgSach;
        private Button btnSearch;
        private Button btnClose;
        private Button btnDelete;
        private Button btnFix;
        private Button btnAdd;
        private ComboBox txtType;
    }
}