using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 마우스메시지이벤트
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            label1.Text = "마우스 버튼 클릭 : " + e.X + ", " + e.Y;
        }

        private void Form1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            label1.Text = "마우스 버튼 클릭 : " + e.X + ", " + e.Y;
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            label2.Text = "마우스 버튼 클릭 : " + e.X + ", " + e.Y;
        }

        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {
            label2.Text = "마우스 버튼 클릭 : " + e.X + ", " + e.Y;
        }

        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
            MessageBox.Show("키이벤트");
        }
    }
}
