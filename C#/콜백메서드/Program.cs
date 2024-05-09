using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 콜백메서드
{
    internal class Program
    {
        delegate void CalcDelegate(int x, int y);

        static void Callback(int x, int y, CalcDelegate dele) 
        {
            dele(x, y);
        }


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
            CalcDelegate plus = Plus;
            CalcDelegate minus = Minus;
            CalcDelegate multiple = Muitiple;
            CalcDelegate divide = Divide;

            // 등록
            // 이벤트 발생을 가정 - 콜백함수 호출
            Callback(20, 10, plus);
            Callback(20, 10, minus);
            Callback(20, 10, multiple);
            Callback(20, 10, divide);
        }
    }
}
