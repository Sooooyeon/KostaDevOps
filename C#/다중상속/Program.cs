using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//  class 자식클래스 : 인터페이스1, 인터페이스2, 인터페이스3...

namespace 다중상속
{
    public interface ICamera
    {
        void Camera();
    }
    public interface ICallPhone
    {
        void CallPhone();
    }

    public interface INetwork
    {
        void Network();
    }

    public class SmartPhone : ICamera, ICallPhone, INetwork
    {
        virtual public void Camera()
        {
            Console.WriteLine("카메라 기능");
        }
        virtual public void CallPhone()
        {
            Console.WriteLine("전화걸기 기능");
        }
        virtual public void Network()
        {
            Console.WriteLine("네트워크 기능");
        }
    }

    class Samsung : SmartPhone { }
    internal class Program
    {
        static void Main(string[] args)
        {
            SmartPhone phone = new SmartPhone();
            phone.Camera();
            phone.CallPhone();
            phone.Network();   
        }
    }
}
