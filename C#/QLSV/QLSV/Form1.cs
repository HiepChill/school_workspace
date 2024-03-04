using System.Data;
using System.Data.SqlClient;
using System.Windows;
using System;

namespace QLSV
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        string SqlConnect = @"Data Source=HIEPCHUPC;Initial Catalog=QLSV;Persist Security Info=True;User ID=sa;Password=1234";

        SqlConnection conn = null;
        SqlDataAdapter daSV;
        DataTable dtSV;
        int pos = -1;

        private void Form1_Load(object sender, EventArgs e)
        {
            conn = new SqlConnection(SqlConnect);
            conn.Open();
            string sql = "SELECT MaSV as 'Mã SV', HoSV as 'Họ SV', TenSV as 'Tên SV', NgaySinh as 'Ngày sinh', GioiTinh as 'Giới tính', MaKhoa as 'Mã Khoa' FROM SinhVien";
            daSV = new SqlDataAdapter(sql, conn);
            dtSV = new DataTable(sql);
            daSV.Fill(dtSV);
            dgSV.DataSource = dtSV;
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void dgSV_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            pos = e.RowIndex;
            if (pos >= 0 && pos < dgSV.RowCount)
            {
                txtId.Text = dtSV.Rows[pos][0].ToString();
                txtFName.Text = dtSV.Rows[pos][1].ToString();
                txtLName.Text = dtSV.Rows[pos][2].ToString();

            }
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            string masv = txtId.Text;
            string hosv = txtFName.Text;
            string tensv = txtLName.Text;
            DateTime ngaysinh = dob.Value;
            string gioitinh = "";
            if (radio1.Checked)
            {
                gioitinh = "Nam";
            }
            else
            {
                gioitinh = "Nữ";
            }
            string makhoa = boxId.Text;
            string str = "Insert into SinhVien values('" + masv + "' , N'" + hosv + "' , N'" + tensv + "' , '" + ngaysinh + "' , N'" + gioitinh + "' , '" + makhoa + "')";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();
            
        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            DialogResult result = MessageBox.Show("Bạn có chắc chắn muốn thoát?", "Xác nhận thoát", MessageBoxButtons.YesNo, MessageBoxIcon.Question);

            if (result == DialogResult.Yes)
            {
                // Đóng ứng dụng
                Application.Exit();
            }
        }

        private void btnFix_Click(object sender, EventArgs e)
        {
            string masv = dtSV.Rows[pos][0].ToString();
            string hosv = txtFName.Text;
            string tensv = txtLName.Text;
            DateTime ngaysinh = dob.Value;
            string gioitinh = "";
            if (radio1.Checked)
            {
                gioitinh = "Nam";
            }
            else
            {
                gioitinh = "Nữ";
            }
            string makhoa = boxId.Text;
            string str = "Update SinhVien set HoSV = N'" + hosv + "' , TenSV = N'" + tensv + "' , NgaySinh = '" + ngaysinh + "' , GioiTinh = '" + gioitinh + "' , MaKhoa = '" + makhoa + "' where MaSV = '" + masv + "'";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();//thực hiện câu lệnh Update
            //lấy lại dữ liệu vừa thêm vào lên datagridview nhà xuất bản
            
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            string masv = dtSV.Rows[pos][0].ToString();
            string str = "Delete SinhVien where MaSV = '" + masv + "'";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();//thực hiện câu lệnh Update
            //lấy lại dữ liệu vừa thêm vào lên datagridview nhà xuất bản
            
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            dtSV.Rows.Clear();//xóa các dòng dữ liệu cũ trong bảng dtNXB
            daSV.Fill(dtSV);//đổ dữ liệu từ daNXB vào dtNXB
        }
    }
}