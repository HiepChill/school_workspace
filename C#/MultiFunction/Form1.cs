using System.Diagnostics;
using System.Text;
using System.Windows.Forms;
using SimpleTCP;

namespace FileExplorer
{
    public partial class Form1 : Form
    {
        List<string> listFiles = new List<string>();
        public Form1()
        {
            InitializeComponent();
        }

        private void btnOpen_Click(object sender, EventArgs e)
        {
            listFiles.Clear();
            listView.Items.Clear();
            using (FolderBrowserDialog fbd = new FolderBrowserDialog() { Description = "Select your path." })
            {
                if (fbd.ShowDialog() == DialogResult.OK)
                {
                    txtPath.Text = fbd.SelectedPath;
                    foreach (string items in Directory.GetFiles(fbd.SelectedPath))
                    {
                        imageList.Images.Add(System.Drawing.Icon.ExtractAssociatedIcon(items));
                        FileInfo fi = new FileInfo(items);
                        listFiles.Add(fi.FullName);
                        listView.Items.Add(fi.Name, imageList.Images.Count - 1);
                    }
                }
            }
        }

        private void listView_SelectedIndexChanged(object sender, EventArgs e)
        {
            //if (listView.FocusedItem != null)
            //{
            //    Process.Start(listFiles[listView.FocusedItem.Index]);
            //}
            if (listView.SelectedItems.Count > 0)
            {
                int selectedIndex = listView.SelectedItems[0].Index;
                string selectedFilePath = listFiles[selectedIndex];

                try
                {
                    ProcessStartInfo startInfo = new ProcessStartInfo();
                    startInfo.FileName = selectedFilePath;
                    startInfo.UseShellExecute = true;

                    Process.Start(startInfo);
                }

                catch (Exception ex)
                {
                    MessageBox.Show("Error: " + ex.Message, "Error Opening File", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            lblStatus.Text = DateTime.Now.ToString("T");
        }

        private void btnCapture_Click(object sender, EventArgs e)
        {
            Bitmap bm = new Bitmap(Screen.PrimaryScreen.Bounds.Width, Screen.PrimaryScreen.Bounds.Height);
            Graphics g = Graphics.FromImage(bm);
            g.CopyFromScreen(0, 0, 0, 0, bm.Size);
            pictureBox.Image = bm;
        }

        void Capture()
        {
            while (true)
            {
                Bitmap bm = new Bitmap(Screen.PrimaryScreen.Bounds.Width, Screen.PrimaryScreen.Bounds.Height);
                Graphics g = Graphics.FromImage(bm);
                g.CopyFromScreen(0, 0, 0, 0, bm.Size);
                pictureBox.Image = bm;
            }
        }

        private void btnRecord_Click(object sender, EventArgs e)
        {
            Thread t = new Thread(Capture);
            t.Start();
        }

        SimpleTcpServer server;

        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Start();

            server = new SimpleTcpServer();
            server.Delimiter = 0x13;//endter
            server.StringEncoder = Encoding.UTF8;
            server.DataReceived += Server_DataReceived;
        }

        private void Server_DataReceived(object sender, SimpleTCP.Message e)
        {
            txtStatus.Invoke((MethodInvoker)delegate ()
            {
                txtStatus.Text += e.MessageString;
                e.ReplyLine(string.Format("You said: {0}", e.MessageString));
            });
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            txtStatus.Text += "Server starting...";
            System.Net.IPAddress ip = new System.Net.IPAddress(long.Parse(txtHost.Text));
            server.Start(ip, Convert.ToInt32(txtPort.Text));
        }

        private void btnStop_Click(object sender, EventArgs e)
        {
            if (server.IsStarted)
            {
                server.Stop();
            }
        }
    }
}