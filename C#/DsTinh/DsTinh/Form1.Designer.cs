namespace DsTinh
{
    partial class Form1
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
            this.label1 = new System.Windows.Forms.Label();
            this.txtTenTinh = new System.Windows.Forms.TextBox();
            this.dgvTinh = new System.Windows.Forms.DataGridView();
            this.bnThem = new System.Windows.Forms.Button();
            this.bnSua = new System.Windows.Forms.Button();
            this.bnXoa = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dgvTinh)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(72, 49);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(50, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Tên Tỉnh";
            // 
            // txtTenTinh
            // 
            this.txtTenTinh.Location = new System.Drawing.Point(160, 46);
            this.txtTenTinh.Name = "txtTenTinh";
            this.txtTenTinh.Size = new System.Drawing.Size(177, 20);
            this.txtTenTinh.TabIndex = 1;
            // 
            // dgvTinh
            // 
            this.dgvTinh.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvTinh.Location = new System.Drawing.Point(75, 117);
            this.dgvTinh.Name = "dgvTinh";
            this.dgvTinh.Size = new System.Drawing.Size(293, 150);
            this.dgvTinh.TabIndex = 2;
            this.dgvTinh.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgvTinh_CellClick);
            // 
            // bnThem
            // 
            this.bnThem.Location = new System.Drawing.Point(75, 296);
            this.bnThem.Name = "bnThem";
            this.bnThem.Size = new System.Drawing.Size(75, 23);
            this.bnThem.TabIndex = 3;
            this.bnThem.Text = "Thêm";
            this.bnThem.UseVisualStyleBackColor = true;
            this.bnThem.Click += new System.EventHandler(this.bnThem_Click);
            // 
            // bnSua
            // 
            this.bnSua.Location = new System.Drawing.Point(173, 296);
            this.bnSua.Name = "bnSua";
            this.bnSua.Size = new System.Drawing.Size(75, 23);
            this.bnSua.TabIndex = 4;
            this.bnSua.Text = "Sửa";
            this.bnSua.UseVisualStyleBackColor = true;
            this.bnSua.Click += new System.EventHandler(this.bnSua_Click);
            // 
            // bnXoa
            // 
            this.bnXoa.Location = new System.Drawing.Point(271, 296);
            this.bnXoa.Name = "bnXoa";
            this.bnXoa.Size = new System.Drawing.Size(75, 23);
            this.bnXoa.TabIndex = 5;
            this.bnXoa.Text = "Xóa";
            this.bnXoa.UseVisualStyleBackColor = true;
            this.bnXoa.Click += new System.EventHandler(this.bnXoa_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(448, 336);
            this.Controls.Add(this.bnXoa);
            this.Controls.Add(this.bnSua);
            this.Controls.Add(this.bnThem);
            this.Controls.Add(this.dgvTinh);
            this.Controls.Add(this.txtTenTinh);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dgvTinh)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtTenTinh;
        private System.Windows.Forms.DataGridView dgvTinh;
        private System.Windows.Forms.Button bnThem;
        private System.Windows.Forms.Button bnSua;
        private System.Windows.Forms.Button bnXoa;
    }
}

