using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// 1. 인터페이스를 생성.
// 2. 인터페이스로부터 상속받은 클래스를 구현.
// 3. 스타크래프트 게임의 3종족 유닛 - 공격, 이동은 유닛의 일반적인 필수 기능
// 4. 드라군, 저글링 

namespace 인터페이스
{
    public interface IUnit
    {
        void Attack();
        void Move();
    }

    public class Zergling : IUnit
    {
        public void Attack()
        {
            Console.WriteLine("저글링 공격");
        }

        public void Move()
        {
            Console.WriteLine("저글링 이동");
        }
    }

    public class Dragoon : IUnit
    {
        public void Attack()
        {
            Console.WriteLine("드라군 공격");
        }

        public void Move()
        {
            Console.WriteLine("드라군 이동");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Dragoon d  = new Dragoon();
            d.Attack();
            d.Move();

            Zergling z = new Zergling();
            z.Attack();
            z.Move();
        }
    }
}
