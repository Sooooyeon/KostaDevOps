using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnEvent_Click(object sender, EventArgs e)
        {
            string strOrder = "";

            if (chkbok.Checked == true)
            {
                strOrder += chkbok.Text + "\n";
            }
            if (chkjjam.Checked == true)
            {
                strOrder += chkjjam.Text + "\n";
            }
            if (chkTang.Checked == true)
            {
                strOrder += chkTang.Text + "\n";
            }
            if (chkla.Checked == true)
            {
                strOrder += chkla.Text + "\n";
            }

            lblOrder.Text = strOrder + "메뉴를 요청하였습니다.";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnEnter_Click(object sender, EventArgs e)
        {
            if(radioAgree.Checked == true)
            {
                MessageBox.Show("개인정보 제공에 동의하셨습니다.");
            }
            else if(radioDisagree.Checked == true)
            {
                MessageBox.Show("개인정보 제공에 미동의하셨습니다.");
            }
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            string strText = textBox1.Text + "\n라고 요청사항이 접수되었습니다.";
            MessageBox.Show(strText);

        }

        private void btnPay_Click(object sender, EventArgs e)
        {
            string strText = cbPay.Text + "(으)로" + lbArea.Text
                + "결재방법을 선택하셨습니다.";
            MessageBox.Show(strText);
        }

        private void cbPay_SelectedIndexChanged(object sender, EventArgs e)
        {
            lbArea.Items.Clear();

            if (cbPay.SelectedIndex == 0)
            {
                lbArea.Items.Add("일시불");
                lbArea.Items.Add("3개월 할부");
                lbArea.Items.Add("6개월 할부");
            }
            else if (cbPay.SelectedIndex == 1)
            {
                lbArea.Items.Add("하나은행");
                lbArea.Items.Add("신한은행");
                lbArea.Items.Add("국민은행");
            }
            else if (cbPay.SelectedIndex == 2)
            {
                lbArea.Items.Add("M포인트");
                lbArea.Items.Add("포인트리");
                lbArea.Items.Add("레이저포인트");
            }
        }
    }
}
