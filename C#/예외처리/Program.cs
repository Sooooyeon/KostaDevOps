using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 예외처리
{
    internal class Program
    {
        static int[] ar = { 1, 2, 3, 4, 5 };
        static int idx = 8;

        static public void Method1()
        {
            Method2();
        }

        static public void Method2()
        {
            Console.WriteLine(ar[idx]);
        }
        static void Main(string[] args)
        {
            //try
            //{
            //    // Console.WriteLine(ar[idx]);
            //    Method1();
            //}
            //catch(IndexOutOfRangeException e)
            //{
            //    Console.WriteLine("예외 발생 : {0}",e.Message);
            //}

            try
            {
                Method1();
            }
            catch (Exception e)
            {
                Console.WriteLine("예외 발생 : {0}", e.Message);
                Console.WriteLine(e.Source);
                Console.WriteLine(e.TargetSite);
                Console.WriteLine(e.StackTrace);
            }
        }
    }
}
