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
		// 영역 결정 연산자를 사용해 전역변수임을 알려줌
		// C와는 다른 C++의 특징. 지역내에서 같은 변수명의 지역변수와 전역변수를 사용할 수 있음


		char ch = '2' - '0';
		cout << Add(10, 20) << endl;
		cout << Add(3.14, 1.59) << endl;
		cout << Add('A', 1) << endl;
		cout << Add('A', ch) << endl;





	}



}