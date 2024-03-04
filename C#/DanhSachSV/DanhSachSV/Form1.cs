using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DanhSachSV
{
    public partial class Form1 : Form
    {
        private List<SinhVien> ds;
        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            ds = new List<SinhVien>();
            SinhVien sv1 = new SinhVien("SV0001","Lê Văn Toàn",new DateTime(2002,11,3),true,"Nam Định","62TH1","CNTT");
            SinhVien sv2 = new SinhVien("SV0002", "Nguyễn Văn Hưởng", new DateTime(2002, 1, 9), true, "Hà Nội", "62TH2", "CNTT");
            SinhVien sv3 = new SinhVien("SV0003", "Nguyễn Thị Hoa", new DateTime(2002, 8, 7), false, "Hưng Yên", "62TH1", "CNTT");
            
            ds.Add(sv1);
            ds.Add(sv2);
            ds.Add(sv3);

            // Create an unbound DataGridView by declaring a column count.
            dataGridView1.ColumnCount = 7;
            dataGridView1.ColumnHeadersVisible = true;

            // Set the column header style.
            DataGridViewCellStyle columnHeaderStyle = new DataGridViewCellStyle();

            columnHeaderStyle.BackColor = Color.Beige;
            columnHeaderStyle.Font = new Font("Verdana", 9, FontStyle.Bold);
            dataGridView1.ColumnHeadersDefaultCellStyle = columnHeaderStyle;

            dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.DisplayedCells;

            // Set the column header names.
            dataGridView1.Columns[0].Name = "Mã SV";
            //dataGridView1.Columns[0].Width = 100;
            dataGridView1.Columns[1].Name = "Họ tên";
            //dataGridView1.Columns[1].Width = 120;
            dataGridView1.Columns[2].Name = "Ngày sinh";
            dataGridView1.Columns[3].Name = "Giới tính";
            dataGridView1.Columns[4].Name = "Quê quán";
            dataGridView1.Columns[5].Name = "Lớp";
            dataGridView1.Columns[6].Name = "Khoa";

            HienThi();
        }
        private void HienThi()
        {
            
            // Populate the rows.
            foreach (SinhVien sv in ds)
            {
                DataGridViewRow row = (DataGridViewRow)dataGridView1.Rows[0].Clone();
                row.Cells[0].Value = sv.MaSV;
                row.Cells[1].Value = sv.HotenSV;
                row.Cells[2].Value = sv.Ngaysinh.ToShortDateString();
                row.Cells[3].Value = sv.Gioitinh?"Nam":"Nữ";
                row.Cells[4].Value = sv.Quequan;
                row.Cells[5].Value = sv.Lop;
                row.Cells[6].Value = sv.Khoa;

                dataGridView1.Rows.Add(row);
            }
            txt_MaSV.Clear();
            txt_TenSV.Clear();
            dtp_Ngaysinh.Value = DateTime.Today;
            cmb_Que.SelectedIndex = -1;
            cmb_Lop.SelectedIndex = -1;
            cmb_Khoa.SelectedIndex = -1;
        }

        private void btn_Them_Click(object sender, EventArgs e)
        {
            if (txt_MaSV.Text.Trim().Length != 0)
            {
                bool exists = ds.Exists(element => element.MaSV == txt_MaSV.Text.Trim());
                if (exists)
                {
                    MessageBox.Show("Mã sinh viên đã tồn tại. Hãy nhập vào mã chưa có","Lỗi nhập liệu",MessageBoxButtons.OK,MessageBoxIcon.Error);
                }
                else
                {
                    SinhVien a = new SinhVien(txt_MaSV.Text, txt_TenSV.Text,dtp_Ngaysinh.Value,(rdo_Nam.Checked?true:false),cmb_Que.Text,cmb_Lop.Text,cmb_Khoa.Text);//, dtb_ngaysinh.Value, rb_nam.Checked, tb_diachi.Text);
                    ds.Add(a);
                    dataGridView1.Rows.Clear();
                    HienThi();
                }
            }
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int chiso = -1;
            chiso = dataGridView1.SelectedCells[0].RowIndex;
            if (chiso >= 0 && chiso < ds.Count)
            {
                txt_MaSV.Text = ds[chiso].MaSV;
                txt_TenSV.Text = ds[chiso].HotenSV;
                dtp_Ngaysinh.Value = ds[chiso].Ngaysinh;
                if (ds[chiso].Gioitinh) 
                    rdo_Nam.Checked = true; 
                else rdo_Nu.Checked = true;
                cmb_Que.Text = ds[chiso].Quequan;
                cmb_Lop.Text = ds[chiso].Lop;
                cmb_Khoa.Text = ds[chiso].Khoa;
            }
            else 
            {
                txt_MaSV.Clear();
                txt_TenSV.Clear();
                dtp_Ngaysinh.Value = DateTime.Today;
                cmb_Que.SelectedIndex = -1;
                cmb_Lop.SelectedIndex = -1;
                cmb_Khoa.SelectedIndex = -1;
                
            }
        }

        private void btn_Sua_Click(object sender, EventArgs e)
        {
            int chiso = -1;
            chiso = dataGridView1.SelectedCells[0].RowIndex;
            if (chiso >= 0 && chiso < ds.Count)
            {
                ds[chiso].MaSV = txt_MaSV.Text;
                ds[chiso].HotenSV = txt_TenSV.Text;

                ds[chiso].Ngaysinh = dtp_Ngaysinh.Value;
                if (rdo_Nam.Checked)
                    ds[chiso].Gioitinh = true;
                else ds[chiso].Gioitinh = false;
                ds[chiso].Quequan=cmb_Que.Text;
                ds[chiso].Lop=cmb_Lop.Text;
                ds[chiso].Khoa=cmb_Khoa.Text;

                dataGridView1.Rows.Clear();
                HienThi();
            }
        }

        private void btn_Xoa_Click(object sender, EventArgs e)
        {
            int chiso = -1;
            chiso = dataGridView1.SelectedCells[0].RowIndex;
            if (chiso>=0 && chiso < ds.Count)
            {
                ds.RemoveAt(chiso);
                dataGridView1.Rows.Clear();
                HienThi();
            }
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
