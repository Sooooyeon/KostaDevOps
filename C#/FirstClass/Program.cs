using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstClass
{
    public class Dog
    {
        protected int eyes, nose, mouse, ears;

        public Dog() 
        {
            eyes = 2;
            nose = 1;
            mouse = 1;
            ears = 2;
        }

        virtual public void Bark() {
            Console.WriteLine("멍멍");
        }
    }

    public class Pudle : Dog
    {
        public override void Bark()
        {
            Console.WriteLine("월월");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            dog.Bark();

            Pudle pudle = new Pudle();
            pudle.Bark();
        }
    }
}
