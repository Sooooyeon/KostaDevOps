using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace 스레드상태폼
{
    public partial class Form1 : Form
    {
        private Thread thd;
        private string strState;
        delegate void CrossCall();
        public Form1()
        {
            InitializeComponent();
        }

        private void btnThreadState_Click(object sender, EventArgs e)
        {
            //ThreadStart ts = new ThreadStart(ThreadFunction);
            //thd = new Thread(ts);
            thd = new Thread(new ThreadStart(ThreadFunction)); ;
            txtThreadState.Text += "스레드 상태 : " + thd.ThreadState + "\r\n";
            thd.Start();
            txtThreadState.Text += "스레드 상태 : " + thd.ThreadState + "\r\n";


        }

        private void ThreadFunction()
        {
            int count = 0;
            while (count < 100)
            {
                txtThreadState.Invoke(new CrossCall(ThreadState));
                count++;
                Thread.Sleep(1000);
                strState = "스레드 상태 : " + thd.ThreadState + "\r\n";
            }
        }

        private void ThreadState()
        {
            txtThreadState.Text += strState;
        }
    }
}
