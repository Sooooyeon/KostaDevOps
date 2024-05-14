using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

// 암묵적 타입 - 타입을 명시하지 않고, var 키워드로 선언
// 변수의 실제 타입은 컴파일러가 초기식을 보고 추론

namespace 암묵적타입
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //var x = 10;
            //var y = 5;
            //var str = "문자열";

            //var list = new List<int>(10);

            //Console.SetCursorPosition(x, y);
            //Console.WriteLine(str);

            //int[] ar = { 1, 2, 3, 4, 5, 6 }; // 제네릭 타입의 컬렉션
            //foreach(var n in ar)
            //{
            //    Console.WriteLine(n);
            //}

            dynamic value; // var는 컴파일 중에 타입 결정, dynamic은 실행중에 결정
            value = 5;
            Console.WriteLine(value);

            value = 3.14;
            Console.WriteLine(value);

            value = "문자열";
            Console.WriteLine(value);

           
        }
    }
}
