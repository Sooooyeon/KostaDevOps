using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace switchTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // int i = 2;
            string i = "둘";
            switch(i)
            {
                case "하나":
                    Console.WriteLine("1");
                    break;
                case "둘":
                    Console.WriteLine("2");
                    goto case "하나";
                default:
                    Console.WriteLine("그 외");
                    break; 
            }
        }
    }
}
