using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 오버로딩
{
    public class Zerg 
    {
        public void Overload(int zerggling) {
            Console.WriteLine("저글링 {0} 마리",zerggling);
        }
        public void Overload(int zerggling, int hydra) {
            Console.WriteLine("저글링 {0} 마리 + 히드라 {1} 마리",zerggling, hydra);
        }
        public void Overload(int zerggling, int hydra, int lurker)
        {
            Console.WriteLine("저글링 {0} 마리 + 히드라 {1} 마리 + 럴커 {2}", zerggling, hydra, lurker);
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Zerg zerg = new Zerg();
            zerg.Overload(1);
            zerg.Overload(1,2);
            zerg.Overload(1,2,3);

        }
    }
}
