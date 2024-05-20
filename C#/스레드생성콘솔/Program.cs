using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace 스레드생성콘솔
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("주 스레드 시작");
            ThreadStart ts = new ThreadStart(ThreadFuncion);
            Thread thd = new Thread(ts);
            thd.Start();
            Console.WriteLine("워커 스레드 시작 : " + thd.ThreadState.ToString());
            Console.WriteLine("주 스레드 종료");
            //Thread.Sleep(100);
            //thd.Abort();
            //thd.Join();
        }

        public static void ThreadFuncion()
        {
            try 
            {
                int count = 0;
                while (count < 1000)
                {
                    count++;
                    Console.WriteLine("스레드 동작중 ...");
                    Thread.Sleep(1000);
                }
                Console.WriteLine("정상 종료");
            }
            catch(ThreadAbortException e)
            {
                Console.WriteLine("Abort 예외 발생 : " + e);
            }
            finally
            {
                Console.WriteLine("finally!");
            }
            
        }
    }
}
