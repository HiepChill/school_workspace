﻿namespace QLKho
{
    partial class Report1
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
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            linkLabel1 = new LinkLabel();
            groupBox3 = new GroupBox();
            dataGridView1 = new DataGridView();
            label4 = new Label();
            label5 = new Label();
            linkLabel2 = new LinkLabel();
            Column1 = new DataGridViewTextBoxColumn();
            Column2 = new DataGridViewTextBoxColumn();
            Column3 = new DataGridViewTextBoxColumn();
            Column4 = new DataGridViewTextBoxColumn();
            Column5 = new DataGridViewTextBoxColumn();
            Column9 = new DataGridViewTextBoxColumn();
            groupBox3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.BackColor = SystemColors.Control;
            label1.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point);
            label1.Location = new Point(302, 9);
            label1.Name = "label1";
            label1.Size = new Size(260, 37);
            label1.TabIndex = 0;
            label1.Text = "Báo cáo nhập hàng";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point);
            label2.Location = new Point(340, 55);
            label2.Name = "label2";
            label2.Size = new Size(180, 17);
            label2.TabIndex = 1;
            label2.Text = "Ngày 20, tháng 8, năm 2023";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(27, 113);
            label3.Name = "label3";
            label3.Size = new Size(142, 15);
            label3.TabIndex = 2;
            label3.Text = "Tên nhân viên thực hiện : ";
            // 
            // linkLabel1
            // 
            linkLabel1.AutoSize = true;
            linkLabel1.Location = new Point(175, 113);
            linkLabel1.Name = "linkLabel1";
            linkLabel1.Size = new Size(115, 15);
            linkLabel1.TabIndex = 3;
            linkLabel1.TabStop = true;
            linkLabel1.Text = "Lương Phương Nam";
            linkLabel1.LinkClicked += linkLabel1_LinkClicked;
            // 
            // groupBox3
            // 
            groupBox3.Controls.Add(dataGridView1);
            groupBox3.Location = new Point(12, 148);
            groupBox3.Name = "groupBox3";
            groupBox3.Size = new Size(936, 355);
            groupBox3.TabIndex = 4;
            groupBox3.TabStop = false;
            groupBox3.Text = "Danh sách sản phẩm";
            // 
            // dataGridView1
            // 
            dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Columns.AddRange(new DataGridViewColumn[] { Column1, Column2, Column3, Column4, Column5, Column9 });
            dataGridView1.Location = new Point(15, 16);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowTemplate.Height = 25;
            dataGridView1.Size = new Size(912, 327);
            dataGridView1.TabIndex = 0;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(729, 506);
            label4.Name = "label4";
            label4.Size = new Size(112, 15);
            label4.TabIndex = 5;
            label4.Text = "Nhân viên xác nhận";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(27, 80);
            label5.Name = "label5";
            label5.Size = new Size(98, 15);
            label5.TabIndex = 6;
            label5.Text = "Mã bản báo cáo :";
            // 
            // linkLabel2
            // 
            linkLabel2.AutoSize = true;
            linkLabel2.Location = new Point(175, 80);
            linkLabel2.Name = "linkLabel2";
            linkLabel2.Size = new Size(61, 15);
            linkLabel2.TabIndex = 7;
            linkLabel2.TabStop = true;
            linkLabel2.Text = "111999991";
            linkLabel2.LinkClicked += linkLabel2_LinkClicked;
            // 
            // Column1
            // 
            Column1.HeaderText = "STT";
            Column1.Name = "Column1";
            // 
            // Column2
            // 
            Column2.HeaderText = "Mã sản phẩm";
            Column2.Name = "Column2";
            // 
            // Column3
            // 
            Column3.HeaderText = "Tên sản phẩm";
            Column3.Name = "Column3";
            // 
            // Column4
            // 
            Column4.HeaderText = "Nguồn gốc";
            Column4.Name = "Column4";
            // 
            // Column5
            // 
            Column5.HeaderText = "Số lượng";
            Column5.Name = "Column5";
            // 
            // Column9
            // 
            Column9.HeaderText = "Giá nhập";
            Column9.Name = "Column9";
            // 
            // Report1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(960, 607);
            Controls.Add(linkLabel2);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(groupBox3);
            Controls.Add(linkLabel1);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Report1";
            Text = "Báo cáo nhập hàng";
            groupBox3.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private LinkLabel linkLabel1;
        private GroupBox groupBox3;
        private DataGridView dataGridView1;
        private Label label4;
        private Label label5;
        private LinkLabel linkLabel2;
        private DataGridViewTextBoxColumn Column1;
        private DataGridViewTextBoxColumn Column2;
        private DataGridViewTextBoxColumn Column3;
        private DataGridViewTextBoxColumn Column4;
        private DataGridViewTextBoxColumn Column5;
        private DataGridViewTextBoxColumn Column9;
    }
}