using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 스레드풀
{
    public partial class Form1 : Form
    {
        string thdCode = null;
        delegate void CrossCall();
        public Form1()
        {
            InitializeComponent();
        }

        private void btnThreadPool_Click(object sender, EventArgs e)
        {
            txtThreadPool.Clear();
            txtThreadPool.Text += "스레드풀 시작" + "\r\n";
            for(int i = 0; i < 10; i++)
            {
                ThreadPool.QueueUserWorkItem(new WaitCallback(ThreadFunction));    
            }
            txtThreadPool.Text += "스레드풀 종료" + "\r\n";
        }

        private void ThreadFunction(object obj)
        {
            txtThreadPool.Invoke(new CrossCall(ThreadState));
            thdCode = "스레드 식별 : " + Thread.CurrentThread.GetHashCode().ToString()
                + "스레드 상태 : " + Thread.CurrentThread.ThreadState.ToString() + "\r\n";
            Thread.Sleep(1000);
        }

        private void ThreadState()
        {
            txtThreadPool.Text += thdCode;
        }

    }
}
