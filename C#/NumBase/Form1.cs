using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace NumBase
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnint_Click(object sender, EventArgs e)
        {
            int value = 100;
            lblResult.Text = value.ToString();
        }

        private void btndouble_Click(object sender, EventArgs e)
        {
            double value = 3.14;
            lblResult.Text = value.ToString();
        }

        private void btnstring_Click(object sender, EventArgs e)
        {
            string value = "hello";
            lblResult.Text = value.ToString();
        }
    }
}
