using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 구구단
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnDan_Click(object sender, EventArgs e)
        {
            lblResult.Text = "";
            int dan = int.Parse(textBox1.Text);
            for(int i = 1; i<10; i++)
            {
                lblResult.Text += dan + " * " + i.ToString() + " = " 
                    + (dan * i).ToString() + "\n";
            }
        }
    }
}
