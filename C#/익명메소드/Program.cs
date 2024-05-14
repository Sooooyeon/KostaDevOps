using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 익명메소드
{
    // 익명메소드의 특징
    // 별도의 메소드를 만들지 않기 때문에 오버헤드를 줄일 수 있다.
    // 델리게이트 안의 코드는 메소드 자체가 복잡하면 안된다.
    // 여러 클래스에서 공통으로 사용하는 메소드로는 권장하지 않는다.
    internal class Program
    {
        delegate int CalcDelegate(int x, int y);
        static void Main(string[] args)
        {
            CalcDelegate del1;
            del1 = delegate (int x, int y)
            {
                return x + y;
            };
            Console.WriteLine(del1(10,20));
        }
    }
}
