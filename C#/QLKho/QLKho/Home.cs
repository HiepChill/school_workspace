using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace QLKho
{
    public partial class Home : Form
    {
        public Home()
        {
            InitializeComponent();
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            AddFn a = new AddFn();
            a.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            FixFn a = new FixFn();
            a.ShowDialog();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Search search = new Search();
            search.ShowDialog();
        }
    }
}
