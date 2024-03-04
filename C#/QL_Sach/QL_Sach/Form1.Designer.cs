namespace QL_Sach
{
    partial class FQLSach
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
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tpLoaiSach = new System.Windows.Forms.TabPage();
            this.tpNXB = new System.Windows.Forms.TabPage();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.tbMaNXB = new System.Windows.Forms.TextBox();
            this.tbTenNXB = new System.Windows.Forms.TextBox();
            this.btThemNXB = new System.Windows.Forms.Button();
            this.btSuaNXB = new System.Windows.Forms.Button();
            this.btXoaNXB = new System.Windows.Forms.Button();
            this.dgNXB = new System.Windows.Forms.DataGridView();
            this.tabControl1.SuspendLayout();
            this.tpNXB.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgNXB)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tpLoaiSach);
            this.tabControl1.Controls.Add(this.tpNXB);
            this.tabControl1.Location = new System.Drawing.Point(12, 27);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(575, 351);
            this.tabControl1.TabIndex = 0;
            // 
            // tpLoaiSach
            // 
            this.tpLoaiSach.Location = new System.Drawing.Point(4, 22);
            this.tpLoaiSach.Name = "tpLoaiSach";
            this.tpLoaiSach.Padding = new System.Windows.Forms.Padding(3);
            this.tpLoaiSach.Size = new System.Drawing.Size(567, 325);
            this.tpLoaiSach.TabIndex = 0;
            this.tpLoaiSach.Text = "Loại sách";
            this.tpLoaiSach.UseVisualStyleBackColor = true;
            // 
            // tpNXB
            // 
            this.tpNXB.Controls.Add(this.dgNXB);
            this.tpNXB.Controls.Add(this.btXoaNXB);
            this.tpNXB.Controls.Add(this.btSuaNXB);
            this.tpNXB.Controls.Add(this.btThemNXB);
            this.tpNXB.Controls.Add(this.tbTenNXB);
            this.tpNXB.Controls.Add(this.tbMaNXB);
            this.tpNXB.Controls.Add(this.label2);
            this.tpNXB.Controls.Add(this.label1);
            this.tpNXB.Location = new System.Drawing.Point(4, 22);
            this.tpNXB.Name = "tpNXB";
            this.tpNXB.Padding = new System.Windows.Forms.Padding(3);
            this.tpNXB.Size = new System.Drawing.Size(567, 325);
            this.tpNXB.TabIndex = 1;
            this.tpNXB.Text = "Nhà xuất bản";
            this.tpNXB.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(41, 42);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(47, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Mã NXB";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(41, 75);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(51, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Tên NXB";
            // 
            // tbMaNXB
            // 
            this.tbMaNXB.Location = new System.Drawing.Point(149, 42);
            this.tbMaNXB.Name = "tbMaNXB";
            this.tbMaNXB.Size = new System.Drawing.Size(249, 20);
            this.tbMaNXB.TabIndex = 2;
            // 
            // tbTenNXB
            // 
            this.tbTenNXB.Location = new System.Drawing.Point(149, 72);
            this.tbTenNXB.Name = "tbTenNXB";
            this.tbTenNXB.Size = new System.Drawing.Size(249, 20);
            this.tbTenNXB.TabIndex = 3;
            // 
            // btThemNXB
            // 
            this.btThemNXB.Location = new System.Drawing.Point(44, 109);
            this.btThemNXB.Name = "btThemNXB";
            this.btThemNXB.Size = new System.Drawing.Size(75, 23);
            this.btThemNXB.TabIndex = 4;
            this.btThemNXB.Text = "Thêm";
            this.btThemNXB.UseVisualStyleBackColor = true;
            this.btThemNXB.Click += new System.EventHandler(this.btThemNXB_Click);
            // 
            // btSuaNXB
            // 
            this.btSuaNXB.Location = new System.Drawing.Point(183, 109);
            this.btSuaNXB.Name = "btSuaNXB";
            this.btSuaNXB.Size = new System.Drawing.Size(75, 23);
            this.btSuaNXB.TabIndex = 5;
            this.btSuaNXB.Text = "Sửa";
            this.btSuaNXB.UseVisualStyleBackColor = true;
            this.btSuaNXB.Click += new System.EventHandler(this.btSuaNXB_Click);
            // 
            // btXoaNXB
            // 
            this.btXoaNXB.Location = new System.Drawing.Point(322, 109);
            this.btXoaNXB.Name = "btXoaNXB";
            this.btXoaNXB.Size = new System.Drawing.Size(75, 23);
            this.btXoaNXB.TabIndex = 6;
            this.btXoaNXB.Text = "Xóa";
            this.btXoaNXB.UseVisualStyleBackColor = true;
            this.btXoaNXB.Click += new System.EventHandler(this.btXoaNXB_Click);
            // 
            // dgNXB
            // 
            this.dgNXB.AllowUserToAddRows = false;
            this.dgNXB.AllowUserToDeleteRows = false;
            this.dgNXB.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.dgNXB.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dgNXB.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgNXB.Location = new System.Drawing.Point(6, 148);
            this.dgNXB.MultiSelect = false;
            this.dgNXB.Name = "dgNXB";
            this.dgNXB.ReadOnly = true;
            this.dgNXB.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dgNXB.Size = new System.Drawing.Size(555, 171);
            this.dgNXB.TabIndex = 7;
            this.dgNXB.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgNXB_CellClick);
            // 
            // FQLSach
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(599, 390);
            this.Controls.Add(this.tabControl1);
            this.Name = "FQLSach";
            this.Text = "Quản lý sách";
            this.Load += new System.EventHandler(this.FQLSach_Load);
            this.tabControl1.ResumeLayout(false);
            this.tpNXB.ResumeLayout(false);
            this.tpNXB.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgNXB)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tpLoaiSach;
        private System.Windows.Forms.TabPage tpNXB;
        private System.Windows.Forms.DataGridView dgNXB;
        private System.Windows.Forms.Button btXoaNXB;
        private System.Windows.Forms.Button btSuaNXB;
        private System.Windows.Forms.Button btThemNXB;
        private System.Windows.Forms.TextBox tbTenNXB;
        private System.Windows.Forms.TextBox tbMaNXB;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
    }
}

