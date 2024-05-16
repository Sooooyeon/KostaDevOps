using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace StringMethod
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnInput_Click(object sender, EventArgs e)
        {
            string str = txtInput.Text;
            //lblResult.Text = str.Length.ToString();

            //int pos = str.IndexOf("-");

            //if (pos >= 0)
            //{
            //    lblResult.Text = (pos + 1).ToString() + "번째에 - 를 검색";
            //}

            // 801234-1234567

            //string substr = str.Substring(7, 1);
            //if (substr == "1")
            //{
            //    lblResult.Text = "남성";
            //} else if(substr == "2")
            //{
            //    lblResult.Text = "여성";
            //} else 
            //{
            //    lblResult.Text = "주민번호를 잘못 입력하셨습니다.";
            //}


            //CompareTo : 문자열끼리 대소 비교
            //if(str.CompareTo("050101") >= 0)
            //{
            //    lblResult.Text = "미성년자입니다.";
            //}
            //else 
            //{
            //    lblResult.Text = "성인입니다.";
            //}


            //Replace 기능
            //string newStr = str.Replace("ㅈㅈㅈ", "www");
            //lblResult.Text = newStr;


            //split 기능
            lblResult.Text = "";
            string[] strArr = str.Split(new char[] { ',' });


            //for(int i = 0; i < strArr.Length; i++) 
            //{
            //    lblResult.Text += strArr[i] + "\n";
            //}

            foreach (string arr in strArr)
            {
                lblResult.Text += arr + "\n";
            }

        }
    }
}
