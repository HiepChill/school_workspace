using System.Data;
using System.Data.SqlClient;
using System.Data.SqlTypes;
using System.Drawing;

namespace QLCHHoaQua
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        string SqlConnect = @"Data Source=HIEPCHUPC;Initial Catalog=QLCHHQ;Persist Security Info=True;User ID=sa;Password=1234";

        SqlConnection conn = null;
        SqlDataAdapter daHQ;
        DataTable dtHQ;
        int pos = -1;


        private void Form1_Load(object sender, EventArgs e)
        {
            conn = new SqlConnection(SqlConnect);
            conn.Open();
            string sql = "SELECT STT as 'STT' , LoaiHQ as 'Tên sản phẩm' , DonGia as 'Đơn giá' , SoLuong as 'Số lượng' , ThanhTien as 'Thành tiền' FROM DonHang";
            daHQ = new SqlDataAdapter(sql, conn);
            dtHQ = new DataTable(sql);
            daHQ.Fill(dtHQ);
            dgHQ.DataSource = dtHQ;
        }

        private void txtPrice_TextChanged(object sender, EventArgs e)
        {

        }

        private void cbbType_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (cbbType.SelectedItem == "Táo")
            {
                txtPrice.Text = "10000";
            }
            else if (cbbType.SelectedItem == "Dưa hấu")
            {
                txtPrice.Text = "17000";
            }
            else if (cbbType.SelectedItem == "Chuối")
            {
                txtPrice.Text = "4000";
            }
            else if (cbbType.SelectedItem == "Lê")
            {
                txtPrice.Text = "8000";
            }
            else if (cbbType.SelectedItem == "Cam")
            {
                txtPrice.Text = "12000";
            }
        }

        void tinhTongTien()
        {
            conn = new SqlConnection(SqlConnect);
            conn.Open();
            string str = "SELECT SUM(ThanhTien) FROM DonHang";
            SqlCommand cmd = new SqlCommand(str, conn);
            object tong = cmd.ExecuteScalar();
            txtTotal.Text = tong.ToString();
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            int tong = 0;
            int stt = dgHQ.Rows.Count + 1;
            string ten = cbbType.Text;
            int gia = Convert.ToInt32(txtPrice.Text);
            int sl = Convert.ToInt32(number.Value);
            int tt = gia * sl;
            string str = "INSERT INTO DonHang (STT , LoaiHQ , DonGia , SoLuong , ThanhTien) " +
                         "VALUES (@stt , @ten, @gia, @sl, @tt)";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.Parameters.AddWithValue("@stt", stt);
            cmd.Parameters.AddWithValue("@ten", ten);
            cmd.Parameters.AddWithValue("@gia", gia);
            cmd.Parameters.AddWithValue("@sl", sl);
            cmd.Parameters.AddWithValue("@tt", tt);
            cmd.ExecuteNonQuery();
            dtHQ.Rows.Clear();
            daHQ.Fill(dtHQ);
            tinhTongTien();
        }

        private void dgHQ_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int pos = e.RowIndex;
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            int stt = pos + 1;
            string str1 = "DELETE DonHang WHERE STT = @stt";
            SqlCommand cmd = new SqlCommand(str1, conn);
            cmd.Parameters.AddWithValue("@stt", stt);
            cmd.ExecuteNonQuery();

            string str2 = "UPDATE DonHang SET STT = STT - 1 WHERE STT > @stt";
            SqlCommand cmd2 = new SqlCommand(str2, conn);
            cmd2.Parameters.AddWithValue("@stt", stt);
            cmd2.ExecuteNonQuery();

            dtHQ.Rows.Clear();
            daHQ.Fill(dtHQ);
            tinhTongTien();
        }

        private void txtMoney_TextChanged(object sender, EventArgs e)
        {
            try
            {
                int tongTien = Convert.ToInt32(txtTotal.Text);
                int tienKhachDua = Convert.ToInt32(txtMoney.Text);
                int tienTraLai = tienKhachDua - tongTien;
                txtPayBack.Text = tienTraLai.ToString();
            }
            catch (Exception)
            {
                MessageBox.Show("Lỗi nhập dữ liệu", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnFinish_Click(object sender, EventArgs e)
        {
            string str = "DELETE from DonHang";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();
            dtHQ.Rows.Clear();
            daHQ.Fill(dtHQ);
            tinhTongTien();
            cbbType.Text = "";
            number.Value = 0;
            txtPrice.Text = "";
        }
    }
}