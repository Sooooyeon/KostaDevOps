using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Text;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;


namespace 스레드동기화
{
    public partial class Form1 : Form
    {
        private string thdCode;
        private delegate void CrossCall();
        private int money;
        //private object lockObject = new object();
        private static Mutex mtx = new Mutex(false, "mtxObj");
        public Form1()
        {
            InitializeComponent();
            thdCode = null;
            money = 10000;
        }

        private void btnThreadLock_Click(object sender, EventArgs e)
        {
            txtThreadState.Clear();
            ThreadStart ts1 = new ThreadStart(ThreadTeller);
            ThreadStart ts2 = new ThreadStart(ThreadTeller);
            ThreadStart ts3 = new ThreadStart(ThreadTeller);

            Thread internetBanking = new Thread(ts1);
            Thread mobileBanking = new Thread(ts2);
            Thread teleBanking = new Thread(ts3);

            internetBanking.Start();
            mobileBanking.Start();
            teleBanking.Start();
        }

        private void ThreadTeller()
        {
            int task = 0;
            // lock(lockObject)
            //Monitor.Enter(lockObject);
            mtx.WaitOne();
            {
                while(task < 5) 
                {
                    money += 1000;
                    txtThreadState.Invoke(new CrossCall(ThreadState));
                    thdCode = "뱅킹 고유번호 " + Thread.CurrentThread.GetHashCode()
                        + ": 입금잔액 : " + money + "원" + "\r\n";
                    Thread.Sleep(100);
                    task++;
                }
                mtx.ReleaseMutex();
                //Monitor.Exit(lockObject);
            }
        }


        private void ThreadState()
        {
            txtThreadState.Text += thdCode;
        }
    }
}
