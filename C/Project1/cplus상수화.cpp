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

	// const를 붙여 의도와 다르게 실행되는 것을 막는다.

	int GetX() const{ return x; };
	int GetY() const{ return y; };
	void SetXY(int x, int y) {
		this->x = x;
		this->y = y;

	};
};



MousePoint& CopyObject(MousePoint& pt1, MousePoint& pt2) {
	pt1 = pt2;
	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;
	return pt1;
}

void main() {
	MousePoint* pObj;
	MousePoint pt(10, 20);
	const MousePoint mp1(20, 30);
	MousePoint mp2(40, 50);

	// mp1 = mp2; // mp1 자체가 상수화 되어 오류 발생
	// mp1.SetXY(1, 2); // mp1은 상수이기때문에 변경 불가능해 값을 변경하는 SetXY 함수 호출이 불가능

	MousePoint mp3(11, 22);
	MousePoint mp4(33, 44);
	CopyObject(mp3, mp4);
	cout << mp3.GetX() << endl;
	cout << mp3.GetY() << endl;










}