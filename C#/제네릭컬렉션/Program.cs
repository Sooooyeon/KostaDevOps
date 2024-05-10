using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 제네릭컬렉션
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //ArrayList ar = new ArrayList(10);
            //ar.Add(1);
            //ar.Add(2.34);
            //ar.Add("string");

            //// ar[0]; // 자료형이 같을때만 []로 접근가능

            //// 명시적 형변환을 통해 값을 가져올 수 있다.
            //int i = (int)ar[0];
            //double d = (double)ar[1];
            //string s = (string)ar[2];

            //Console.WriteLine("{0},{1},{2}", i, d, s);




            // 데이터양이 많아질경우 위처럼 하나씩 명시적 형변환을 하기는 힘들다.
            // 따라서 제네릭컬렉션을 사용한다.
            // 제네릭컬렉션에서는 같은 형식의 자료만 저장가능

            List<string> list = new List<string>();
            list.Add("C#");
            list.Add("ASP.NET");
            list.Add("배고프다.");

            foreach (string item in list) 
            { 
                Console.WriteLine(item);
            }


        }
    }
}
