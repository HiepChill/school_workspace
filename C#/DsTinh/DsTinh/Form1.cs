using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Newtonsoft.Json;

namespace DsTinh
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        DataTable dtTinh;
        int idtinh=0;
        int chiso = -1;

        private void Form1_Load(object sender, EventArgs e)
        {
            dtTinh = new DataTable("Tinh");
            dtTinh.Columns.Add("ID");
            dtTinh.Columns.Add("Tên tỉnh");

            try
            {
                StreamReader reader = new StreamReader(@"tinh.json");
                string jsonstr = reader.ReadToEnd();
                dtTinh = JsonConvert.DeserializeObject<DataTable>(jsonstr);
                reader.Close();
            }
            catch (Exception)
            {

                MessageBox.Show("Không thể đọc file!", "Lỗi đọc file!", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }

            dgvTinh.DataSource = dtTinh;
        }

        private void bnThem_Click(object sender, EventArgs e)
        {
            DataRow[] rows = dtTinh.Select();
            if (rows != null)
                idtinh = Int32.Parse(rows[rows.Length - 1]["ID"].ToString());
            idtinh++;
            dtTinh.Rows.Add(idtinh, txtTenTinh.Text);
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            string jsonstr = JsonConvert.SerializeObject(dtTinh);
            File.WriteAllText("tinh.json", jsonstr);
        }

        private void dgvTinh_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            chiso = e.RowIndex;
            if (chiso >= 0 && chiso < dtTinh.Rows.Count)
                txtTenTinh.Text = dtTinh.Rows[chiso]["Tên tỉnh"].ToString();
            else
                txtTenTinh.Clear();
        }

        private void bnXoa_Click(object sender, EventArgs e)
        {
            if (chiso >= 0 && chiso < dtTinh.Rows.Count)
            {
                dtTinh.Rows.RemoveAt(chiso);
            }
            else
            {
                MessageBox.Show("Chưa chọn tỉnh để xóa", "Lỗi xóa!", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void bnSua_Click(object sender, EventArgs e)
        {
            if (chiso >= 0 && chiso < dtTinh.Rows.Count)
            {
                idtinh = Int32.Parse(dtTinh.Rows[chiso]["ID"].ToString());

                dtTinh.Rows.RemoveAt(chiso);
                DataRow row1 = dtTinh.NewRow();
                row1["ID"] = idtinh;
                row1["Tên tỉnh"] = txtTenTinh.Text;
                dtTinh.Rows.InsertAt(row1, chiso);
            }
            else
            {
                MessageBox.Show("Chưa chọn tỉnh để sửa", "Lỗi sửa!", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
    }
}
