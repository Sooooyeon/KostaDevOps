using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace discount
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnConfirm_Click(object sender, EventArgs e)
        {
            int age = int.Parse(txtAge.Text);
            if (age < 0)
            {
                lblResult.Text = "나이를 다시 입력해주세요";
            }
            else if(age<=15 || age>=65){
                lblResult.Text = "할인 대상입니다.";
            }
            else
            {
                lblResult.Text = "할인 대상이 아닙니다.";
            }
        }
    }
}
