using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// abstract 추상클래스, 객체 생성 불가

namespace 추상클래스
{
    public abstract class SmartPhone 
    {
        public abstract void Network();
        public abstract void Camere();
        public abstract void CallPhone();

    }

    public class Samsung : SmartPhone
    {
        public override void Network() 
        {
            Console.WriteLine("삼성 네트워크 기능");
        }
        public override void Camere() 
        {
            Console.WriteLine("삼성 카메라 기능");
        }
        public override void CallPhone()
        {
            Console.WriteLine("삼성 통화 기능");
        }
    }

    public class Apple : SmartPhone
    {
        public override void Network()
        {
            Console.WriteLine("애플 네트워크 기능");
        }
        public override void Camere()
        {
            Console.WriteLine("애플 카메라 기능");
        }
        public override void CallPhone()
        {
            Console.WriteLine("애플 통화 기능");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            SmartPhone sm = new Apple(); // 동적 결합
            sm.Network();
            sm.Camere();
            sm.CallPhone();
        }
    }
}
