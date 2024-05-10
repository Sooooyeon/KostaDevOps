using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 유틸리티클래스
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //DateTime A = new DateTime(2024, 5, 10);
            //DateTime B = new DateTime(2024, 7, 24);

            //TimeSpan C = B - A;
            //Console.WriteLine(C); // 686일 차이

            //A = new DateTime(2024, 5, 10);
            //C = new TimeSpan(100, 0, 0, 0);
            //B = A + C;

            //Console.WriteLine(B);



            //Random rnd  = new Random();

            //for(int i = 0; i < 100; i++) 
            //{
            //    Console.CursorLeft = rnd.Next(80);
            //    Console.CursorTop = rnd.Next(24);
            //    Console.Write('*');
            //}



            Console.WriteLine("test" + "\r\n" + Environment.NewLine); // 개행
            Console.WriteLine(Environment.MachineName); 
            Console.WriteLine(Environment.UserName);
            Console.WriteLine(Environment.OSVersion);
            Console.WriteLine(Environment.CurrentDirectory);
            // 객체를 생성하지 않고 바로 .연산자로 호출이 가능한
            // MachineName, UserName, OSVersion... 등은 static 변수



        }
    }
}
