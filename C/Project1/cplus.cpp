#include<iostream>

// 인자가 없는 경우 네임스페이스를 사용해 함수를 구별할 수 있다.
// 네임스페이스를 사용하면 협업 시 코드 충돌을 줄일 수 있다.

namespace A {
	void func() {
		std::cout << "A학급 주성" << std::endl;
	}
}

namespace B {
	void func() {
		std::cout << "B학급 주성" << std::endl;
	}
}

using namespace std; // 선언해주면  std:: 생략이 가능하다.

void func(int a = 10, int b = 20) {
	cout << "두 전달인자 출력:" << a << b << endl;
}

void main() {
	// cout은 모니터와 연결되어 있다. 화면에 출력하는 역할을 함
	std::cout << "hello" << std::endl;
	std::cout << "hello C++" << std::endl;

	int a = 10;
	char b[] = "안녕";

	std::cout << a << std::endl;
	cout << b << endl;

	// 스코프 연산자
	// ::  ->  영역 결정 연산자

	A::func();
	B::func();


	// cin은 입력을 받는 함수
	char c;
	cin >> c ;


	// C++에서는 선언부 매개변수에 기본값 설정이 가능
	func();
	func(100);
	func(100,200);






}