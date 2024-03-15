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
	void SetXY(int nX, int nY);
};
// �Լ��� ���������ڰ� private�ΰ�쵵 ������ Ŭ���� �ܺο��� ����.
// Ŭ���� ������ ���������ڴ� ���� �Ұ���. 

void MousePoint::SetXY(int nX, int nY) {
	x = nX;
	y = nY;
}

class Test 
{
private: // ��������� public���� ����ϴ°��� ��ü���� ���信 �����
	int x;
	int y;

public:
	Test(int nX, int nY) 
	{
		x = nX;
		y = nY;
		cout << "�������ڰ� 2���� ������" << endl;
	}
	Test(){
		cout << "����Ʈ ������" << endl;
	}
	~Test() {
		cout << "�Ҹ���" << endl;
	}
	int GetX(){ return x; };
	int GetY(){ return y; };
	void SetXY(int nX, int nY);
};

void Test::SetXY(int nX, int nY) {
	x = nX;
	y = nY;
}

void main() {
	MousePoint pt; // Ŭ������ ������ ������ ��ü
	// ����Ʈ �����ڰ� �־ ������ �Լ��� ��� ��ü ������ ����
	// ex ) MousePoint(){} �� ������ ����Ʈ �����ڰ� ����
	// ���� �� �ʱ�ȭ�� �Ұ���
	// �������ڰ� �ִ� �����ڸ� ������ ��� ����Ʈ �����ڴ� ����� ���ϰ� ��.
	// ����Ʈ �����ڸ� ����ϰ� ������ �߰��� ���� �ʿ�(�����ε�)
	
	//pt.x = 0; // �⺻���� private���� �����Ϳ� ���� �Ұ���
	pt.SetXY(10, 20);

	Test ts2;
	Test ts(12, 20); // ������ �Լ��� ���� ��ü ���� �� �ʱ�ȭ
	cout << ts.GetX() << endl;
	cout << ts.GetY() << endl;

	ts.SetXY(50,100);
	cout << ts.GetX() << endl;
	cout << ts.GetY() << endl;


	// �Ҹ��� - ��ü�� �Ҹ��� �� �ڵ� ȣ���. �����ε� �ȵ�
}	// 2���� ��ü�� �����߱⶧���� �Ҹ��ڰ� 2�� ȣ���