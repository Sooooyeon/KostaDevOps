#include<iostream>

// Ŭ���� - ����ڰ� ������ �߻����� ��������
// ũ������ �����Լ� �ۿ��� �ۼ�

using namespace std;

// �Լ��� �����θ� class�ȿ� ������ �� ������,
// class �� header ���Ϸ� �и��ϴ°� �������̶� ������ �����Ѵ�.
// class �ȿ� �Լ��� �����θ� �ۼ��ص� ����

class MousePoint {

private:
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
	void SetXY(int nX, int nY) {
		x = nX;
		y = nY;
	}
};
// �Լ��� ���������ڰ� private�ΰ�쵵 ������ Ŭ���� �ܺο��� ����.
// Ŭ���� ������ ���������ڴ� ���� �Ұ���. 

//class Test 
//{
//private: // ��������� public���� ����ϴ°��� ��ü���� ���信 �����
//	int x;
//	int y;
//
//public:
//	Test(int nX, int nY) 
//	{
//		x = nX;
//		y = nY;
//		cout << "�������ڰ� 2���� ������" << endl;
//	}
//	Test(){
//		cout << "����Ʈ ������" << endl;
//	}
//	~Test() {
//		cout << "�Ҹ���" << endl;
//	}
//	int GetX(){ return x; };
//	int GetY(){ return y; };
//	void SetXY(int nX, int nY);
//};
//
//void Test::SetXY(int nX, int nY) {
//	x = nX;
//	y = nY;
//}

void main() {
	// MousePoint pt; // Ŭ������ ������ ������ ��ü
	// ����Ʈ �����ڰ� �־ ������ �Լ��� ��� ��ü ������ ����
	// ex ) MousePoint(){} �� ������ ����Ʈ �����ڰ� ����
	// ���� �� �ʱ�ȭ�� �Ұ���
	// �������ڰ� �ִ� �����ڸ� ������ ��� ����Ʈ �����ڴ� ����� ���ϰ� ��.
	// ����Ʈ �����ڸ� ����ϰ� ������ �߰��� ���� �ʿ�(�����ε�)
	
	//pt.x = 0; // �⺻���� private���� �����Ϳ� ���� �Ұ���
	//pt.SetXY(10, 20);

	// Test ts2;

	// ���� �޸𸮿� ���� ��ü ����
	// Test ts(12, 20); // ������ �Լ��� ���� ��ü ���� �� �ʱ�ȭ
	// cout << ts.GetX() << endl;
	// cout << ts.GetY() << endl;

	// �� �޸𸮿� �������� ��ü ����
	// Test* ts3 = new Test(11, 22);
	// cout << ts3->GetX() << endl;
	// cout << ts3->GetY() << endl;


	// delete ts3; // ��� �� ����

	// ts.SetXY(50,100);
	// cout << ts.GetX() << endl;
	// cout << ts.GetY() << endl;


	// �Ҹ��� - ��ü�� �Ҹ��� �� �ڵ� ȣ���. 
	// // 2���� ��ü�� �����߱⶧���� �Ҹ��ڰ� 2�� ȣ��ʿ����ε� �ȵ�


	// Test pt[3] = { Test(10,20), Test(100,200), Test(500,600) }; // �ʱ�ȭ

	// pt[0].SetXY(10, 20);
	// pt[1].SetXY(100, 200);
	/*for (int i = 0; i < 3; i++) {
		cout << pt[i].GetX() << endl;
		cout << pt[i].GetY() << endl;

	}*/
	// cout << pt[0].GetX() << endl;
	// cout << pt[1].GetX() << endl;


	MousePoint* pArr[3];

	pArr[0] = new MousePoint(10, 20);
	pArr[1] = new MousePoint(100, 200);
	pArr[2] = new MousePoint(1000, 2000);

	for (int i = 0; i < 3; i++) {
		cout << pArr[i]->GetX() << endl;
		cout << pArr[i]->GetY() << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pArr[i];
		// �� �޸𸮿��� �迭�� ������� ��쿡�� delete[ ]
		// ���ÿ��� ������� ��� �ϳ��� ��������� 
		// ���ÿ��� �� �޸� �ּҸ� ���ָ� �ش� �� ������ �����Ͱ� ���ŵ�
	}

}	