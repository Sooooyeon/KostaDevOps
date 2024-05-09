using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 멀티델리게이트
{
    internal class Program
    {
        delegate void CalcDelegate(int x, int y);

        static void Plus(int a, int b)
        {
            Console.WriteLine(a + b);
        }
        static void Minus(int a, int b)
        {
            Console.WriteLine(a - b);
        }

        static void Muitiple(int a, int b)
        {
            Console.WriteLine(a * b);
        }

        static void Divide(int a, int b)
        {
            Console.WriteLine(a / b);
        }

        static void Main(string[] args)
        {
            CalcDelegate del1 = Plus;
            CalcDelegate del2 = Minus;
            CalcDelegate del3 = Muitiple;
            CalcDelegate del4 = Divide;

            del1 += del2;
            del1 += del3;
            del1 += del4;
            del1 -= del3;

            del1(20, 10);

        }
    }
}
