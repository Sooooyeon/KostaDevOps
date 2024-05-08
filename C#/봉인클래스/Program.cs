using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 봉인클래스
{
    class Base
    {
        public virtual void Message()
        {
            // 추상메서드와 다르게 virtual을 구현부가 있다.
            Console.WriteLine("Base");
        }
    }

    class Derived : Base 
    { 
        public sealed override void Message() 
        {
            // sealed 를 사용하면 자식클래스에서 더 이상 오버라이딩 불가능
            Console.WriteLine("Derived");
        }

    }

    //class Third : Derived
    //{
    //    public override void Message()  // error
    //    {
    //        Console.WriteLine("Third");
    //    }
    //}

    internal class Program
    {
        static void Main(string[] args)
        {
            Base B = new Base();
            B.Message();

            Base D = new Derived();
            D.Message();
        }
    }
}
