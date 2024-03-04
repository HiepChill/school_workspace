using System.Data;
using System.Data.SqlClient;
using System.Text.RegularExpressions;

namespace QLQuanNet
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        string SqlConnect = @"Data Source=HIEPCHUPC;Initial Catalog=QLS;Persist Security Info=True;User ID=sa;Password=1234";

        SqlConnection conn = null;
        SqlDataAdapter daSach;
        DataTable dtSach;


        int pos = -1;
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

     

        private void button5_Click(object sender, EventArgs e)
        {
            DialogResult result = MessageBox.Show("Bạn có chắc chắn muốn thoát?", "Xác nhận thoát", MessageBoxButtons.YesNo, MessageBoxIcon.Question);

            if (result == DialogResult.Yes)
            {
                // Đóng ứng dụng
                Application.Exit();
            }
        }

        private void txtPrice_TextChanged(object sender, EventArgs e)
        {
            try
            {
                uint a = Convert.ToUInt32(txtPrice.Text);
            }
            catch (Exception ex)
            {
                MessageBox.Show("Sai kiểu dữ liệu!", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            conn = new SqlConnection(SqlConnect);
            conn.Open();
            string sql = "Select MaSach as 'Mã sách' , TenSach as 'Tên sách' , TacGia as 'Tác giả' , TheLoai as 'TheLoai' , DonGia as 'Đơn giá' , MoTa as 'Mô tả' From Sach";
            daSach = new SqlDataAdapter(sql, conn);
            dtSach = new DataTable(sql);
            daSach.Fill(dtSach);
            dgSach.DataSource = dtSach;
        }

        private void dgSach_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            pos = e.RowIndex;
            if (pos >= 0 && pos < dgSach.RowCount)
            {
                txtId.Text = dtSach.Rows[pos][0].ToString();
                txtName.Text = dtSach.Rows[pos][1].ToString();
                txtAuthor.Text = dtSach.Rows[pos][2].ToString();
                txtType.Text = dtSach.Rows[pos][3].ToString();
                txtPrice.Text = dtSach.Rows[pos][4].ToString();
                txtDis.Text = dtSach.Rows[pos][5].ToString();
            }
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            try
            {
                string masach = txtId.Text;
                string tensach = txtName.Text;
                string tacgia = txtAuthor.Text;
                string theloai = txtType.Text;
                string dongia = txtPrice.Text;
                string mota = txtDis.Text;

                string str = "Insert into Sach (MaSach , TenSach , TacGia , TheLoai , DonGia , MoTa)" + "Values (@ms , @ts , @tg , @tl , @dg , @mt)";
                SqlCommand cmd = new SqlCommand(str, conn);
                cmd.Parameters.AddWithValue("@ms", masach);
                cmd.Parameters.AddWithValue("@ts", tensach);
                cmd.Parameters.AddWithValue("@tg", tacgia);
                cmd.Parameters.AddWithValue("@tl", theloai);
                cmd.Parameters.AddWithValue("@dg", dongia);
                cmd.Parameters.AddWithValue("@mt", mota);
                cmd.ExecuteNonQuery();
                string sqlQueryCheck = "SELECT COUNT(MaSach) FROM Sach Where MaSach = @masach";
                SqlCommand cmdCheck = new SqlCommand(sqlQueryCheck, conn);
                cmdCheck.Parameters.AddWithValue("@masach", txtId.Text);
                object dem = cmdCheck.ExecuteScalar();
                int dem2 = Convert.ToInt32(dem);

                if (dem2 > 0)
                {
                    throw new Exception();
                }
                dtSach.Rows.Clear();
                daSach.Fill(dtSach);
            }

            catch (Exception ex)
            {
                MessageBox.Show("Lỗi!");
            }
        }

        private void btnFix_Click(object sender, EventArgs e)
        {
            string masach = dtSach.Rows[pos][0].ToString();
            string tensach = txtName.Text;
            string tacgia = txtAuthor.Text;
            string theloai = txtType.Text;
            string dongia = txtPrice.Text;
            string mota = txtDis.Text;

            string str = "Update Sach Set TenSach = @ts " +
                ", TacGia = @tg " +
                ", TheLoai = @tl " +
                ", DonGia = @dg " +
                ", Mota = @mt Where MaSach = @ms";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.Parameters.AddWithValue("@ms", masach);
            cmd.Parameters.AddWithValue("@ts", tensach);
            cmd.Parameters.AddWithValue("@tg", tacgia);
            cmd.Parameters.AddWithValue("@tl", theloai);
            cmd.Parameters.AddWithValue("@dg", dongia);
            cmd.Parameters.AddWithValue("@mt", mota);
            cmd.ExecuteNonQuery();
            dtSach.Rows.Clear();
            daSach.Fill(dtSach);
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            string masach = dtSach.Rows[pos][0].ToString();
            string str = "Delete Sach Where MaSach = @ms";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.Parameters.AddWithValue("@ms", masach);
            cmd.ExecuteNonQuery();
            dtSach.Rows.Clear();
            daSach.Fill(dtSach);
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            string timkiem = txtSearch.Text;

            string sql = "Select MaSach as 'Mã sách' , TenSach as 'Tên Sách' , TacGia as 'Tác giả' , TheLoai as 'TheLoai' , DonGia as 'Đơn giá' , MoTa as 'Mô tả' From Sach Where TenSach = '" + timkiem + "'";
            daSach = new SqlDataAdapter(sql, conn);
            dtSach = new DataTable(sql);
            daSach.Fill(dtSach);
            dgSach.DataSource = dtSach;
        }
    }
}