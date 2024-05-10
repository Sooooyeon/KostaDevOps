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
        static void Main(string[] args)
        {
            try
            {
                Console.WriteLine(ar[idx]);
            }
            catch(IndexOutOfRangeException e)
            {
                Console.WriteLine("예외 발생 : {0}",e.Message);
            }
        }
    }
}
