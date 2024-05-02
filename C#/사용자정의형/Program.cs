using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace 사용자정의형
{
    internal class Program
    {
        enum Origin { East=100, West, South, North};

        struct Book
        {
            public string name;
            public int price;
            public Book(string name, int price) {
                this.name = name;
                this.price = price;
            }
        }

        static void Main(string[] args)
        {
            // enum
            //Console.WriteLine(Origin.East);
            //Console.WriteLine((int)Origin.East);

            //Console.WriteLine(Origin.West);
            //Console.WriteLine((int)Origin.West);

            //Console.WriteLine(Origin.South);
            //Console.WriteLine((int)Origin.South);

            //Console.WriteLine(Origin.North);
            //Console.WriteLine((int)Origin.North);

            // struct
            //Book book = new Book();
            //book.name = "C# 프로그래밍 정석";
            //book.price = 25000;

            //Book book2 = new Book("JAVA",30000);

            //Console.WriteLine("제목 : " + book.name);
            //Console.WriteLine("가격 : " + book.price.ToString());

            //Console.WriteLine("제목 : " + book2.name);
            //Console.WriteLine("가격 : " + book2.price.ToString());

            int a = 12;

            // 참조형 변수
            ref int b = ref a;

            b = 34;
            Console.WriteLine(a);

        }
    }
}
