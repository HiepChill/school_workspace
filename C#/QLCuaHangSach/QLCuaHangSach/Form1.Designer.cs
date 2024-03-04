namespace QLCuaHangSach
{
    partial class Form
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
            tabPage = new TabControl();
            tab1 = new TabPage();
            tab2 = new TabPage();
            dgNXB = new DataGridView();
            btnDelete = new Button();
            btnFix = new Button();
            btnAdd = new Button();
            txtName = new TextBox();
            txtId = new TextBox();
            label2 = new Label();
            id = new Label();
            tab3 = new TabPage();
            tabPage.SuspendLayout();
            tab2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)dgNXB).BeginInit();
            SuspendLayout();
            // 
            // tabPage
            // 
            tabPage.Controls.Add(tab1);
            tabPage.Controls.Add(tab2);
            tabPage.Controls.Add(tab3);
            tabPage.Location = new Point(1, 0);
            tabPage.Margin = new Padding(3, 2, 3, 2);
            tabPage.Name = "tabPage";
            tabPage.SelectedIndex = 0;
            tabPage.Size = new Size(686, 338);
            tabPage.TabIndex = 0;
            // 
            // tab1
            // 
            tab1.Location = new Point(4, 24);
            tab1.Margin = new Padding(3, 2, 3, 2);
            tab1.Name = "tab1";
            tab1.Padding = new Padding(3, 2, 3, 2);
            tab1.Size = new Size(678, 310);
            tab1.TabIndex = 0;
            tab1.Text = "Loại sách";
            tab1.UseVisualStyleBackColor = true;
            // 
            // tab2
            // 
            tab2.Controls.Add(dgNXB);
            tab2.Controls.Add(btnDelete);
            tab2.Controls.Add(btnFix);
            tab2.Controls.Add(btnAdd);
            tab2.Controls.Add(txtName);
            tab2.Controls.Add(txtId);
            tab2.Controls.Add(label2);
            tab2.Controls.Add(id);
            tab2.Location = new Point(4, 24);
            tab2.Margin = new Padding(3, 2, 3, 2);
            tab2.Name = "tab2";
            tab2.Padding = new Padding(3, 2, 3, 2);
            tab2.Size = new Size(678, 310);
            tab2.TabIndex = 1;
            tab2.Text = "Nhà xuất bản";
            tab2.UseVisualStyleBackColor = true;
            // 
            // dgNXB
            // 
            dgNXB.AllowUserToAddRows = false;
            dgNXB.AllowUserToDeleteRows = false;
            dgNXB.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgNXB.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dgNXB.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgNXB.Location = new Point(6, 140);
            dgNXB.Margin = new Padding(3, 2, 3, 2);
            dgNXB.Name = "dgNXB";
            dgNXB.ReadOnly = true;
            dgNXB.RowHeadersWidth = 51;
            dgNXB.RowTemplate.Height = 29;
            dgNXB.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            dgNXB.Size = new Size(523, 168);
            dgNXB.TabIndex = 7;
            // 
            // btnDelete
            // 
            btnDelete.Location = new Point(272, 87);
            btnDelete.Margin = new Padding(3, 2, 3, 2);
            btnDelete.Name = "btnDelete";
            btnDelete.Size = new Size(103, 39);
            btnDelete.TabIndex = 6;
            btnDelete.Text = "Xóa";
            btnDelete.UseVisualStyleBackColor = true;
            // 
            // btnFix
            // 
            btnFix.Location = new Point(148, 87);
            btnFix.Margin = new Padding(3, 2, 3, 2);
            btnFix.Name = "btnFix";
            btnFix.Size = new Size(96, 39);
            btnFix.TabIndex = 5;
            btnFix.Text = "Sửa";
            btnFix.UseVisualStyleBackColor = true;
            btnFix.Click += btnFix_Click;
            // 
            // btnAdd
            // 
            btnAdd.Location = new Point(28, 87);
            btnAdd.Margin = new Padding(3, 2, 3, 2);
            btnAdd.Name = "btnAdd";
            btnAdd.Size = new Size(95, 39);
            btnAdd.TabIndex = 4;
            btnAdd.Text = "Thêm";
            btnAdd.UseVisualStyleBackColor = true;
            btnAdd.Click += btnAdd_Click;
            // 
            // txtName
            // 
            txtName.Location = new Point(114, 50);
            txtName.Margin = new Padding(3, 2, 3, 2);
            txtName.Name = "txtName";
            txtName.Size = new Size(262, 23);
            txtName.TabIndex = 3;
            // 
            // txtId
            // 
            txtId.Location = new Point(114, 20);
            txtId.Margin = new Padding(3, 2, 3, 2);
            txtId.Name = "txtId";
            txtId.Size = new Size(262, 23);
            txtId.TabIndex = 2;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(28, 52);
            label2.Name = "label2";
            label2.Size = new Size(51, 15);
            label2.TabIndex = 1;
            label2.Text = "Tên NXB";
            // 
            // id
            // 
            id.AutoSize = true;
            id.Location = new Point(28, 22);
            id.Name = "id";
            id.Size = new Size(50, 15);
            id.TabIndex = 0;
            id.Text = "Mã NXB";
            // 
            // tab3
            // 
            tab3.Location = new Point(4, 24);
            tab3.Margin = new Padding(3, 2, 3, 2);
            tab3.Name = "tab3";
            tab3.Padding = new Padding(3, 2, 3, 2);
            tab3.Size = new Size(678, 310);
            tab3.TabIndex = 2;
            tab3.Text = "Tác giả";
            tab3.UseVisualStyleBackColor = true;
            // 
            // Form
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(718, 340);
            Controls.Add(tabPage);
            Margin = new Padding(3, 2, 3, 2);
            Name = "Form";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Quản lý sách";
            tabPage.ResumeLayout(false);
            tab2.ResumeLayout(false);
            tab2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)dgNXB).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private TabControl tabPage;
        private TabPage tab1;
        private TabPage tab2;
        private DataGridView dgNXB;
        private Button btnDelete;
        private Button btnFix;
        private Button btnAdd;
        private TextBox txtName;
        private TextBox txtId;
        private Label label2;
        private Label id;
        private TabPage tab3;
    }
}