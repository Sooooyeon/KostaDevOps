#include<iostream>

// ���ڰ� ���� ��� ���ӽ����̽��� ����� �Լ��� ������ �� �ִ�.
// ���ӽ����̽��� ����ϸ� ���� �� �ڵ� �浹�� ���� �� �ִ�.

namespace A {
	void func() {
		std::cout << "A�б� �ּ�" << std::endl;
	}
}

namespace B {
	void func() {
		std::cout << "B�б� �ּ�" << std::endl;
	}
}

using namespace std; // �������ָ�  std:: ������ �����ϴ�.

void func(int a = 10, int b = 20) {
	cout << "�� �������� ���:" << a << b << endl;
}

void main() {
	// cout�� ����Ϳ� ����Ǿ� �ִ�. ȭ�鿡 ����ϴ� ������ ��
	std::cout << "hello" << std::endl;
	std::cout << "hello C++" << std::endl;

	int a = 10;
	char b[] = "�ȳ�";

	std::cout << a << std::endl;
	cout << b << endl;

	// ������ ������
	// ::  ->  ���� ���� ������

	A::func();
	B::func();


	// cin�� �Է��� �޴� �Լ�
	char c;
	cin >> c ;


	// C++������ ����� �Ű������� �⺻�� ������ ����
	func();
	func(100);
	func(100,200);






}