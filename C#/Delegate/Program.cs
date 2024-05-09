using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Delegate
{

    

    internal class Program
    {
        delegate int CalcDelegate(int x, int y);

        static int Plus(int a, int b)
        {
            return a + b;
        }
        static int Minus(int a, int b)
        {
            return a - b;
        }

        // 멀티 델리게이트
        static void Main(string[] args)
        {
            CalcDelegate del1 = new CalcDelegate(Plus);
            Console.WriteLine(del1(20, 10));

            del1 = Minus;
            Console.WriteLine(del1(20, 10));

            // new 연산자와 delegate 이름을 생략해서 사용할 수 있다.
            CalcDelegate del2 = Minus;
            Console.WriteLine(del2(20, 10));

            // Console.WriteLine(Plus(20, 10));
            // Console.WriteLine(Minus(20, 10));
        }
    }
}
