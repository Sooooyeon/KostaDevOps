#include<iostream>
#include<memory>

using namespace std;

void main() {
	//int* p = new int();

	//// 동적 메모리 8바이트
	//// 스택 메모리 4바이트
	//double* rate = new double;

	//*rate = 3.1415;
	//cout << *rate << endl;
	//delete rate;

	//int* a;
	//int b;
	//cout << "나누는 수 입력 :";
	//cin >> b;

	//try {
	//	a = new int(10);
	//	if (b == 0) throw b;
	//	cout << "나누기 결과 :" << *a / b << endl;
	//	delete a;
	//}
	//catch (int ex){
	//	cout << "예외상황" << endl;
	//	// 예외 상황일 경우 메모리 해제가 되지 않아 메모리 누수 발생
	//}



	// 스마트포인터 버전
	auto_ptr<double> rate(new double);
	*rate = 3.1415;
	cout << *rate << endl;

}