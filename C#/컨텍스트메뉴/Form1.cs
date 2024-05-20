using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 컨텍스트메뉴
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void ToolStripCopy_Click(object sender, EventArgs e)
        {
            lblResult.Text = "복사가 되었습니다.";
        }

        private void ToolStripPaste_Click(object sender, EventArgs e)
        {
            lblResult.Text = "붙여넣기가 되었습니다.";
        }

        private void ToolStripCut_Click(object sender, EventArgs e)
        {
            lblResult.Text = "잘라내기가 되었습니다.";
        }
    }
}
