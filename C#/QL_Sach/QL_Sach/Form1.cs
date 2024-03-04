using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace QL_Sach
{
    public partial class FQLSach : Form
    {
        public FQLSach()
        {
            InitializeComponent();
        }
        //khai báo các biến dùng chung trong nhiều sự kiện 
        string strConnectionString = @"Data Source=HIEPCHUPC;Initial Catalog=QLCuaHangSach;Integrated Security=True";
        //Chú ý: ServerName là tên SQLServer mà bạn truy cập vào,  DatabaseName là tên cơ sở dữ liệu của bạn
        //ví dụ: string strConnectionString = "Data Source=Localhost\\SQLEXPRESS; " +
        //                                  "Initial Catalog=QLSach; Integrated Security=True";
        SqlConnection conn = null;
        SqlDataAdapter daNXB;
        DataTable dtNXB;
        int vitrichon = -1;
        //Bắt sự kiện Load của form FQLSach

        private void FQLSach_Load(object sender, EventArgs e)
        {
            conn = new SqlConnection(strConnectionString);
            conn.Open();//thực hiện mở kết nối
            //lấy dữ liệu từ bảng nhà xuất bản đưa vào datagridview nhà xuất bản
            string sql = "SELECT MaNXB as 'Mã nhà xuất bản', TenNXB as 'Tên nhà xuất bản' FROM NXB";
            daNXB = new SqlDataAdapter(sql, conn);//daNXB thực hiện câu lệnh select
            dtNXB = new DataTable();
            daNXB.Fill(dtNXB);//Đổ dữ liệu vừa select được vào bảng dtNXB
            dgNXB.DataSource = dtNXB;//Gán DataSource của datagridview dgNXB bằng bảng dtNXB
        }

        private void btThemNXB_Click(object sender, EventArgs e)
        {
            //thêm mới nhà xuất bản
            string maNXB = tbMaNXB.Text; //Lấy dữ liệu từ textBox tbMaNXB đưa vào biến maNXB
            string tenNXB = tbTenNXB.Text; //Lấy dữ liệu từ textBox tbTenNXB đưa vào biến TenNXB
            string str = "Insert into NXB values('" + maNXB + "',N'" + tenNXB + "')";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();//thực hiện câu lệnh Insert
            //lấy lại dữ liệu vừa thêm vào lên datagridview nhà xuất bản
            dtNXB.Rows.Clear();//xóa các dòng dữ liệu cũ trong bảng dtNXB
            daNXB.Fill(dtNXB);//đổ dữ liệu từ daNXB vào dtNXB
        }

        //bắt sự kiện CellClick của dgNXB
        private void dgNXB_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            vitrichon = e.RowIndex;//lấy vị trí dòng đang chọn gán cho biến vitrichon
            if (vitrichon >= 0)
            {
                //lấy dữ liệu từ dòng đang chọn chuyển lên khung nhập liệu
                tbMaNXB.Text = dtNXB.Rows[vitrichon][0].ToString();
                tbTenNXB.Text = dtNXB.Rows[vitrichon][1].ToString();
            }
        }
        //bắt sự kiện Click cho nút lệnh Sửa
        private void btSuaNXB_Click(object sender, EventArgs e)
        {
            //sửa chữa một dòng trong bảng Nhà xuất bản
            string maNXB = dtNXB.Rows[vitrichon][0].ToString();//xác định maNXB từ dòng dữ liệu đang chọn
            string tenNXB = tbTenNXB.Text;//Lấy dữ liệu từ textBox tbTenNXB đưa vào biến TenNXB
            string str = "Update NXB set TenNXB = N'" + tenNXB + "' where MaNXB = '" + maNXB + "'";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();//thực hiện câu lệnh Update
            //lấy lại dữ liệu vừa thêm vào lên datagridview nhà xuất bản
            dtNXB.Rows.Clear();//xóa các dòng dữ liệu cũ trong bảng dtNXB
            daNXB.Fill(dtNXB);//đổ dữ liệu từ daNXB vào dtNXB
        }

        private void btXoaNXB_Click(object sender, EventArgs e)
        {
            //xóa một dòng trong bảng Nhà xuất bản
            string maNXB = dtNXB.Rows[vitrichon][0].ToString();//xác định maNXB từ dòng dữ liệu đang chọn
            string str = "Delete NXB where MaNXB = '" + maNXB + "'";
            SqlCommand cmd = new SqlCommand(str, conn);
            cmd.ExecuteNonQuery();//thực hiện câu lệnh Update
            //lấy lại dữ liệu vừa thêm vào lên datagridview nhà xuất bản
            dtNXB.Rows.Clear();//xóa các dòng dữ liệu cũ trong bảng dtNXB
            daNXB.Fill(dtNXB);//đổ dữ liệu từ daNXB vào dtNXB
        }
    }
}
