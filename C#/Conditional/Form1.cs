using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Conditional
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnResult_Click(object sender, EventArgs e)
        {
            int kuk = int.Parse(txtKuk.Text);
            int eng = int.Parse(txtEng.Text);
            int math = int.Parse(txtMath.Text);

            int total = kuk + eng + math;
            int avg = total / 3;

            //if(avg >= 90 && avg <= 100)
            //{
            //    lblResult.Text = "A학점";
            //} else if (avg >= 80 && avg < 90)
            //{
            //    lblResult.Text = "B학점";
            //} else if (avg >= 70 && avg < 80)
            //{
            //    lblResult.Text = "C학점";
            //} else if (avg >= 60 && avg < 70)
            //{
            //    lblResult.Text = "D학점";
            //} else if (avg >= 0 && avg < 60)
            //{
            //    lblResult.Text = "F학점";
            //} else {
            //    lblResult.Text = "점수의 범위가 올바르지 않습니다.";
            //}

            switch (avg/10)
            {
                case 10:
                case 9:
                    lblResult.Text = "A학점";
                    break;
                case 8:
                    lblResult.Text = "B학점";
                    break;
                case 7:
                    lblResult.Text = "C학점";
                    break;
                case 6:
                    lblResult.Text = "D학점";
                    break;
                case 5:
                case 4:
                case 3:
                case 2:
                case 1:
                case 0:
                    lblResult.Text = "F학점";
                    break;
                default:
                    lblResult.Text = "점수의 범위가 올바르지 않습니다.";
                    break;
            }
        }
    }
}
