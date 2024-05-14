using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 람다식
{
    internal class Program
    {
        delegate int CalcDele(int x);

        //static int Add(int a) { 
        //    return a + 1; 
        //}
        static void Main(string[] args)
        {
            //CalcDele d = delegate (int x) { return x + 1; };

            // 1. delegate를 없앤다.
            // 2. 전달인자 타입을 제거한다.
            // 3. return문 없앤다.
            // 4. 중괄호를 없앤다.
            // 5. 화살표를 추가한다.

            CalcDele d = (x) => x + 1;
            Console.WriteLine(d(3));


        }
    }
}
