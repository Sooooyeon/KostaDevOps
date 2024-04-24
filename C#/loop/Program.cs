using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace loop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //for (int i = 0; i < 5; i++)
            //{
            //    Console.WriteLine("Programming");
            //}
            //Console.WriteLine();

            int sum = 0;

            for (int i = 1; i <= 100; i++)
            {
                sum += i;
            }
            Console.WriteLine(sum);

            //int j = 0;
            //while (j < 5)
            //{
            //    Console.WriteLine("Programming");
            //    j++;
            //}
            //Console.WriteLine();

            //int k = 1;
            //while(k < 10)
            //{
            //    // Console.WriteLine("2 * {0} = {1}", k, k*2);
            //    Console.WriteLine($"2 * {k} = {k*2}");
            //    k++;
            //}
            //Console.WriteLine();

            //string snum = null;
            //int num = 0;
            //int sum = 0;

            //do
            //{
            //    Console.Write("숫자를 입력하세요.");
            //    snum = Console.ReadLine();
            //    num = int.Parse(snum);
            //    sum += num;
            //} while (num != 0);
            //Console.WriteLine("누적 합계:{0}", sum);

        }
    }
}
