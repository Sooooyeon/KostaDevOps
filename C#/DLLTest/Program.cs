using ClassLibrary1;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DLLTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("{0}", Class1.Plus(3, 2));
            Console.WriteLine("{0}", Class1.Minus(3, 2));
        }
    }
}
