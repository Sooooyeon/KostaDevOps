using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 공통대화상자
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnOpen_Click(object sender, EventArgs e)
        {
            //ofd.ShowDialog();
            if (ofd.ShowDialog() == DialogResult.OK)
            {
                textBox1.Text = ofd.FileName + "파일을 엽니다.";
            }
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            sfd.Filter = "All file(*.*)|(*.*)";
            if (sfd.ShowDialog() == DialogResult.OK)
            {
                textBox1.Text = sfd.FileName + "파일을 저장합니다.";
            }
        }

        private void btnFont_Click(object sender, EventArgs e)
        {
            if(fd.ShowDialog() == DialogResult.OK)
            {
                textBox1.Font = fd.Font;
            }
        }

        private void btnColor_Click(object sender, EventArgs e)
        {
            if (cd.ShowDialog() == DialogResult.OK)
            {
                textBox1.ForeColor = cd.Color;
            }
        }
    }
}
