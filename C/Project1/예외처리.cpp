#include<iostream>

using namespace std;

void divide(int x, int y) {
	if (x < 0) {
		throw "a�� ���� �����Դϴ�.";
	}
	if (y == 0) {
		throw y;
	}
	cout << "������ ��� : " << x / y << endl;
}

void main() {
	int a = 0;
	int b = 0;

	cout << "�������� �� �Է� : ";
	cin >> a;
	cout << "������ �� �Է� : ";
	cin >> b;

	/*if (b != 0) {
		cout << "������ ��� : " << a / b <<endl;
	}
	else if (b < 0) {
		cout << "b�� �Է°��� �����Դϴ�.";
	}
	else {
		cout << "������ ���� 0 ���� �����Ⱑ �Ұ����մϴ�.";
	}*/

	try
	{
		divide(a,b);
	}
	catch (int exception)
	{
		cout << "������ ���� 0 ���� �����Ⱑ �Ұ����մϴ�." << exception << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

}