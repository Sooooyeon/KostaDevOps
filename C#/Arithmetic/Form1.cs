using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Arithmetic
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

        private void btmPlus_Click(object sender, EventArgs e)
        {
            int hap = int.Parse(txtInput1.Text) + int.Parse(txtInput2.Text);
            lblResult.Text = hap.ToString();
            
        }

        private void btnMinus_Click(object sender, EventArgs e)
        {
            int sub = int.Parse(txtInput1.Text) - int.Parse(txtInput2.Text);
            lblResult.Text = sub.ToString();
        }

        private void btnMultiple_Click(object sender, EventArgs e)
        {
            int mul = int.Parse(txtInput1.Text) * int.Parse(txtInput2.Text);
            lblResult.Text = mul.ToString();
        }

        private void btnDivide_Click(object sender, EventArgs e)
        {
            int div = int.Parse(txtInput1.Text) / int.Parse(txtInput2.Text);
            lblResult.Text = div.ToString();
        }
    }
}
