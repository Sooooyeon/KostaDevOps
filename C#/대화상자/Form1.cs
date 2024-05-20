using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 대화상자
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnModal_Click(object sender, EventArgs e)
        {
            ModalForm modal = new ModalForm();
            // 모달대화상자
            modal.ShowDialog();
        }

        private void btnModaless_Click(object sender, EventArgs e)
        {
            ModalessForm modaless = new ModalessForm();
            modaless.str = textBox1.Text;
            // 모달리스대화상자
            modaless.Show();
        }
    }
}
