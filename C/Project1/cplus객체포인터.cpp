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
		int GetX() { return x; };
		int GetY() { return y; };
		void SetXY(int x, int y){
			// x = x, y = y �� ��� ��������� �ƴ� ���������� ����.

			// ���� this�� ����� ���� ����. ȭ��ǥ ����� ����
			// this�� ��������μ� �ڵ��� �ǹ̰� ���� ��Ȯ����
			// this�� �Լ��� ȣ���ϴ� ��ü
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