#include<iostream>
using namespace std;

class MousePoint
	{
	private: // 멤버변수를 public으로 사용하는것은 객체지향 개념에 위배됨
		int x;
		int y;

	public:
		MousePoint(int nX, int nY)
		{
			x = nX;
			y = nY;
			cout << "전달인자가 2개인 생성자" << endl;
		}
		MousePoint() {
			cout << "디폴트 생성자" << endl;
		}
		~MousePoint() {
			cout << "소멸자" << endl;
		}
		int GetX() { return x; };
		int GetY() { return y; };
		void SetXY(int x, int y){
			// x = x, y = y 일 경우 멤버변수가 아닌 지역변수만 사용됨.

			// 따라서 this를 사용해 간접 참조. 화살표 사용해 접근
			// this를 명시함으로서 코드의 의미가 더욱 명확해짐
			// this는 함수를 호출하는 객체
			this -> x = x;
			this -> y = y;

		};
};

//void SetRect(MousePoint pt1, MousePoint pt2) {
//	cout << pt1.GetX() << endl;
//	cout << pt1.GetY() << endl;
//	cout << pt2.GetX() << endl;
//	cout << pt2.GetY() << endl;
//	pt1.SetXY(1000, 2000);
//	cout << pt1.GetX() << endl;
//	cout << pt1.GetY() << endl;
//}

MousePoint& CopyObject(MousePoint& pt1, MousePoint& pt2) {
	pt1 = pt2;
	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;
	return pt1;
}

void main() {
	MousePoint* pObj;
	MousePoint pt(10,20);
	MousePoint mp1(20, 30);
	MousePoint mp2(40, 50);

	MousePoint mp3(11, 22);
	MousePoint mp4(33, 44);
	CopyObject(mp3, mp4);
	cout << mp3.GetX() << endl;
	cout << mp3.GetY() << endl;



	/*SetRect(mp1, mp2);
	cout << mp1.GetX() << endl;
	cout << mp1.GetY() << endl;


	pObj = &pt;

	pt.SetXY(200, 300);

	cout << pObj-> GetX() << endl;
	cout << pObj-> GetY() << endl;*/






}