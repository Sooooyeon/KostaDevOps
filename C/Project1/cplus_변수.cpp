#include<iostream>

int nTemp = 10;

using namespace std;

int Add(int a, int b) {
	return a + b;
}

double Add(double a, double b) {
	return a + b;
}

char Add(char a, int b) {
	return a + b;
}

char Add(char a, char b) {
	return a + b;
}

void main() {

	{
		/*int nTemp = 20;
		cout << "nTemp = " << nTemp << endl;
		cout << "nTemp = " << ::nTemp << endl;*/
		// ���� ���� �����ڸ� ����� ������������ �˷���
		// C�ʹ� �ٸ� C++�� Ư¡. ���������� ���� �������� ���������� ���������� ����� �� ����


		char ch = '2' - '0';
		cout << Add(10, 20) << endl;
		cout << Add(3.14, 1.59) << endl;
		cout << Add('A', 1) << endl;
		cout << Add('A', ch) << endl;





	}



}