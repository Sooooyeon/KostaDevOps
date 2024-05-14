using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 익명타입
{
    class Human
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public Human(string aName,int aAge) 
        {
            Name = aName;
            Age = aAge;
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            // Human lee = new Human("이순신", 32);
            var lee = new { Name = "이순신", Age = 32 }; 
            Console.WriteLine("이름 : " + lee.Name);
            Console.WriteLine("나이 : " + lee.Age);

            // 익명 메소드
            var temp = new { age = 20, name = "lch" };
            Console.WriteLine(temp.age);
            Console.WriteLine(temp.name);

            var tempArr = new 
            { 
                arrInt = new int[] { 1, 2, 3, 4, 5 },
                arrFloat = new float[] {0.1f, 0.2f, 0.3f}
            };

            foreach(var element in tempArr.arrInt) 
            {
                Console.WriteLine(element);
            }

            foreach (var element in tempArr.arrFloat)
            {
                Console.WriteLine(element);
            }
        }
    }
}
