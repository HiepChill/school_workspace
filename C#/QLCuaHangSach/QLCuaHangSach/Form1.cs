using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace QLCuaHangSach
{
    public partial class Form : System.Windows.Forms.Form
    {
        public Form()
        {
            InitializeComponent();
        }

        string SQLconnect = @"Data Source=HIEPCHUPC;Initial Catalog=QLCuaHangSach;Persist Security Info=True;User ID=sa;Password=1234";

        SqlConnection conn = null;
        SqlDataAdapter daNXB;
        DataTable dtNXB;



        private void Form_Load(object sender, EventArgs e)
        {
            conn = new SqlConnection(SQLconnect);
            conn.Open();//thực hiện mở kết nối
            //lấy dữ liệu từ bảng nhà xuất bản đưa vào datagridview nhà xuất bản
            string sql = "SELECT MaNXB as 'Mã nhà xuất bản', TenNXB as 'Tên nhà xuất bản' FROM NXB";
            daNXB = new SqlDataAdapter(sql, conn);//daNXB thực hiện câu lệnh select
            dtNXB = new DataTable();
            daNXB.Fill(dtNXB);//Đổ dữ liệu vừa select được vào bảng dtNXB
            dgNXB.DataSource = dtNXB;//Gán DataSource của datagridview dgNXB bằng bảng dtNXB
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            string maNXB = txtId.Text; //Lấy dữ liệu từ textBox tbMaNXB đưa vào biến maNXB
            string tenNXB = txtName.Text; //Lấy dữ liệu từ textBox tbTenNXB đưa vào biến TenNXB
            string str = "Insert into NXB values('" + maNXB + "',N'" + tenNXB + "')";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();//thực hiện câu lệnh Insert
            //lấy lại dữ liệu vừa thêm vào lên datagridview nhà xuất bản
            dtNXB.Rows.Clear();//xóa các dòng dữ liệu cũ trong bảng dtNXB
            daNXB.Fill(dtNXB);//đổ dữ liệu từ daNXB vào dtNXB
        }

        private void btnFix_Click(object sender, EventArgs e)
        {

        }
    }
}