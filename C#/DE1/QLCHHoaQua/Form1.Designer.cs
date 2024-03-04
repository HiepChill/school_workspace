namespace QLCHHoaQua
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
            cbbType = new ComboBox();
            txtPrice = new TextBox();
            number = new NumericUpDown();
            btnDelete = new Button();
            btnAdd = new Button();
            label4 = new Label();
            dgHQ = new DataGridView();
            label5 = new Label();
            label6 = new Label();
            label7 = new Label();
            txtTotal = new TextBox();
            txtMoney = new TextBox();
            txtPayBack = new TextBox();
            btnFinish = new Button();
            ((System.ComponentModel.ISupportInitialize)number).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dgHQ).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(44, 29);
            label1.Name = "label1";
            label1.Size = new Size(75, 15);
            label1.TabIndex = 0;
            label1.Text = "Loại hoa quả";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(288, 29);
            label2.Name = "label2";
            label2.Size = new Size(48, 15);
            label2.TabIndex = 1;
            label2.Text = "Đơn giá";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(505, 29);
            label3.Name = "label3";
            label3.Size = new Size(54, 15);
            label3.TabIndex = 2;
            label3.Text = "Số lượng";
            // 
            // cbbType
            // 
            cbbType.FormattingEnabled = true;
            cbbType.Items.AddRange(new object[] { "Táo", "Dưa hấu", "Chuối", "Lê", "Cam" });
            cbbType.Location = new Point(134, 26);
            cbbType.Name = "cbbType";
            cbbType.Size = new Size(123, 23);
            cbbType.TabIndex = 3;
            cbbType.SelectedIndexChanged += cbbType_SelectedIndexChanged;
            // 
            // txtPrice
            // 
            txtPrice.Location = new Point(342, 26);
            txtPrice.Name = "txtPrice";
            txtPrice.ReadOnly = true;
            txtPrice.Size = new Size(133, 23);
            txtPrice.TabIndex = 4;
            txtPrice.TextChanged += txtPrice_TextChanged;
            // 
            // number
            // 
            number.Location = new Point(565, 27);
            number.Name = "number";
            number.Size = new Size(57, 23);
            number.TabIndex = 5;
            // 
            // btnDelete
            // 
            btnDelete.Location = new Point(353, 86);
            btnDelete.Name = "btnDelete";
            btnDelete.Size = new Size(79, 34);
            btnDelete.TabIndex = 7;
            btnDelete.Text = "Xóa";
            btnDelete.UseVisualStyleBackColor = true;
            btnDelete.Click += btnDelete_Click;
            // 
            // btnAdd
            // 
            btnAdd.Location = new Point(224, 86);
            btnAdd.Name = "btnAdd";
            btnAdd.Size = new Size(84, 34);
            btnAdd.TabIndex = 8;
            btnAdd.Text = "Thêm";
            btnAdd.UseVisualStyleBackColor = true;
            btnAdd.Click += btnAdd_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(44, 151);
            label4.Name = "label4";
            label4.Size = new Size(99, 15);
            label4.TabIndex = 9;
            label4.Text = "Chi tiết đơn hàng";
            // 
            // dgHQ
            // 
            dgHQ.AllowUserToAddRows = false;
            dgHQ.AllowUserToDeleteRows = false;
            dgHQ.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgHQ.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dgHQ.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgHQ.Location = new Point(44, 169);
            dgHQ.Name = "dgHQ";
            dgHQ.ReadOnly = true;
            dgHQ.RowTemplate.Height = 25;
            dgHQ.Size = new Size(578, 230);
            dgHQ.TabIndex = 10;
            dgHQ.CellClick += dgHQ_CellClick;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(390, 422);
            label5.Name = "label5";
            label5.Size = new Size(100, 15);
            label5.TabIndex = 11;
            label5.Text = "Tổng tiền phải trả";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(390, 454);
            label6.Name = "label6";
            label6.Size = new Size(101, 15);
            label6.TabIndex = 12;
            label6.Text = "Số tiền khách đưa";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(390, 485);
            label7.Name = "label7";
            label7.Size = new Size(75, 15);
            label7.TabIndex = 13;
            label7.Text = "Số tiền trả lại";
            // 
            // txtTotal
            // 
            txtTotal.Location = new Point(496, 419);
            txtTotal.Name = "txtTotal";
            txtTotal.ReadOnly = true;
            txtTotal.Size = new Size(126, 23);
            txtTotal.TabIndex = 14;
            // 
            // txtMoney
            // 
            txtMoney.Location = new Point(496, 451);
            txtMoney.Name = "txtMoney";
            txtMoney.Size = new Size(126, 23);
            txtMoney.TabIndex = 15;
            txtMoney.TextChanged += txtMoney_TextChanged;
            // 
            // txtPayBack
            // 
            txtPayBack.Location = new Point(496, 482);
            txtPayBack.Name = "txtPayBack";
            txtPayBack.ReadOnly = true;
            txtPayBack.Size = new Size(126, 23);
            txtPayBack.TabIndex = 16;
            // 
            // btnFinish
            // 
            btnFinish.Location = new Point(514, 511);
            btnFinish.Name = "btnFinish";
            btnFinish.Size = new Size(108, 37);
            btnFinish.TabIndex = 17;
            btnFinish.Text = "Hoàn thành";
            btnFinish.UseVisualStyleBackColor = true;
            btnFinish.Click += btnFinish_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(672, 560);
            Controls.Add(btnFinish);
            Controls.Add(txtPayBack);
            Controls.Add(txtMoney);
            Controls.Add(txtTotal);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(dgHQ);
            Controls.Add(label4);
            Controls.Add(btnAdd);
            Controls.Add(btnDelete);
            Controls.Add(number);
            Controls.Add(txtPrice);
            Controls.Add(cbbType);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Chương trình quản lý cửa hàng hoa quả";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)number).EndInit();
            ((System.ComponentModel.ISupportInitialize)dgHQ).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private ComboBox cbbType;
        private TextBox txtPrice;
        private NumericUpDown number;
        private Button btnDelete;
        private Button btnAdd;
        private Label label4;
        private DataGridView dgHQ;
        private Label label5;
        private Label label6;
        private Label label7;
        private TextBox txtTotal;
        private TextBox txtMoney;
        private TextBox txtPayBack;
        private Button btnFinish;
    }
}