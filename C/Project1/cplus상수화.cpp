#include<iostream>
using namespace std;

class MousePoint
{
private: // ��������� public���� ����ϴ°��� ��ü���� ���信 �����
	int x;
	int y;

public:
	MousePoint(int nX, int nY)
	{
		x = nX;
		y = nY;
		cout << "�������ڰ� 2���� ������" << endl;
	}
	MousePoint() {
		cout << "����Ʈ ������" << endl;
	}
	~MousePoint() {
		cout << "�Ҹ���" << endl;
	}

	// const�� �ٿ� �ǵ��� �ٸ��� ����Ǵ� ���� ���´�.

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

	// mp1 = mp2; // mp1 ��ü�� ���ȭ �Ǿ� ���� �߻�
	// mp1.SetXY(1, 2); // mp1�� ����̱⶧���� ���� �Ұ����� ���� �����ϴ� SetXY �Լ� ȣ���� �Ұ���

	MousePoint mp3(11, 22);
	MousePoint mp4(33, 44);
	CopyObject(mp3, mp4);
	cout << mp3.GetX() << endl;
	cout << mp3.GetY() << endl;










}