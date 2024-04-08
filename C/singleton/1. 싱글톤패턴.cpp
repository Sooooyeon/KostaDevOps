#include<iostream>

using namespace std;

class SingletonClass {
private:
	static SingletonClass instance;
	SingletonClass(){}
	~SingletonClass(){}
public:
	static SingletonClass& getInstance() {
		return instance;
	}
	void ShowMessage() {
		cout << "�̱������� ����" << endl;
	}
};

SingletonClass SingletonClass::instance;

void main() {
	SingletonClass::getInstance(); // instance �� :: ����� static���� ������.
	SingletonClass::getInstance().ShowMessage();
}