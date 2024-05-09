using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 아카이브
{
    delegate void CompProg(int nFile);
    class Archive
    {
        public static void Compress(int nFile, CompProg Prog)
        {
            for (int i = 0; i < nFile; i++)
            {
                //Console.WriteLine($"{i+1}번째 파일을 압축하는 중...");
                Prog(i);
                System.Threading.Thread.Sleep(500);
            }
        }
    }
    internal class Program
    {


        public static void Progress(int count)
        {
            Console.WriteLine($"{count + 1}번째 파일을 압축하는 중...");
        }
        static void Main(string[] args)
        {
            Archive archive = new Archive();


            // static으로 클래스 이름으로 직접 접근
            Archive.Compress(10,Progress); 
            // 메모리는 Progress에 있고 Compress에서 사용]
            // Progress는 프론트엔드, Compress는 백엔드로 생각
            Console.WriteLine("모든 파일을 압축하였습니다.");
        }
    }
}
