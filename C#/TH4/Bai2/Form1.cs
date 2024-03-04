namespace Bai2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void txtUser_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void txtPass_TextChanged(object sender, EventArgs e)
        {

        }

        private void chkNho_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string t1, t2;
            string str = "";
            t1 = txtUser.Text;
            t2 = txtPass.Text;
            str += "Tên đăng nhập: " + t1 + "\n" + "Mật khẩu: " + t2;
            if (chkNho.Checked )
            {
                MessageBox.Show("Bạn đã ghi nhớ" + "\n" + str);
            }
                
        }

        private void button2_Click(object sender, EventArgs e)
        {
            txtUser.Clear();
            txtPass.Clear();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}