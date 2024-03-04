namespace BL
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void title_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            txtName.Clear();
            txtDate.Clear();
            txtMonth.Clear();
            txtYear.Clear();
            listBox1.Items.Clear();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtName_TextChanged(object sender, EventArgs e)
        {
            Focus();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            /**int n = Int32.Parse(txtDate.Text);
            int t = Int32.Parse(txtMonth.Text);
            if (n <= 1 && n >= 31)
            {
                MessageBox.Show("Ngay ko hop le!");
                if (t <= 1 && t >= 12)
                {
                    MessageBox.Show("Thang ko hop le!");
                }
            } **/

            try
            {
                int n = Convert.ToInt32(txtDate.Text);
                int t = Convert.ToInt32(txtMonth.Text);
                int y = Convert.ToInt32(txtYear.Text);
                if (txtDate.Text == "" || txtMonth.Text == "" || txtYear.Text == "")
                {
                    throw new Exception("o de trong!");
                }

                if (n <= 1 && n >= 31)
                {
                    throw new Exception("Ko hop le!");
                }

                if (t <= 1 && t >= 12)
                {
                    throw new Exception("KO hop le!");
                }

                txtResult.Text = "Họ tên: " + txtName.Text + "\n" + "Ngày sinh: " + txtDate.Text + "/" + txtMonth.Text + "/" + txtYear.Text + "\n" + "Dịch vụ: " + dv.SelectedItem;
            }
            catch (FormatException)
            {
                MessageBox.Show("Loi", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }




        }

        private void dv_SelectedIndexChanged(object sender, EventArgs e)
        {
            listBox1.Items.Add(dv.SelectedItem);
        }

        private void txtDate_TextChanged(object sender, EventArgs e)
        {

        }
    }
}