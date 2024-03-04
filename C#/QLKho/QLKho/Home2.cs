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
    public partial class Home2 : Form
    {
        public Home2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Report1 report1 = new Report1();
            report1.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Report2 report2 = new Report2();
            report2.ShowDialog();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Search a = new Search();
            a.ShowDialog();
        }
    }
}
