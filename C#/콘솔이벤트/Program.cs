using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 콘솔이벤트
{
    // 이벤트 직접만들어보기..?
    internal class Program
    {
        
        // 이벤트 객체 생성
        public delegate void ButtonEvent();
        public static event ButtonEvent evtClick; // click, keydown과 같은 이벤트로 가정


        public static void onclick()
        {
            evtClick();
        }
        

        // 이벤트 핸들러 생성
        public static void MyHandler()
        {
            Console.WriteLine("버튼 클릭 시에 수행하는 메서드 입니다.");
        }
        static void Main(string[] args)
        {
            // 이벤트와 이벤트 핸들러 등록
            evtClick += new ButtonEvent(MyHandler);
            onclick();
        }
    }
}
