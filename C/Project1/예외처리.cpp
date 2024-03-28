#include<iostream>

using namespace std;

void divide(int x, int y) {
	if (x < 0) {
		throw "a의 값은 음수입니다.";
	}
	if (y == 0) {
		throw y;
	}
	cout << "나누기 결과 : " << x / y << endl;
}

void main() {
	int a = 0;
	int b = 0;

	cout << "나누어질 수 입력 : ";
	cin >> a;
	cout << "나누는 수 입력 : ";
	cin >> b;

	/*if (b != 0) {
		cout << "나누기 결과 : " << a / b <<endl;
	}
	else if (b < 0) {
		cout << "b의 입력값은 음수입니다.";
	}
	else {
		cout << "나누는 수가 0 으로 나누기가 불가능합니다.";
	}*/

	try
	{
		divide(a,b);
	}
	catch (int exception)
	{
		cout << "나누는 수가 0 으로 나누기가 불가능합니다." << exception << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

}