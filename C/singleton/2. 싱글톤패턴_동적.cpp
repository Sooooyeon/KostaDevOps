#include<iostream>

using namespace std;

class SingletonClass {
private:
	static SingletonClass* instance;
	int total;
public:
	SingletonClass() {
		total = 0;
	}
	~SingletonClass() { 
		cout << "소멸" << endl;
	}
	static SingletonClass* getInstance() {
		if (instance == NULL) 
			instance = new SingletonClass();
		return instance;
	}
	void ShowMessage() {
		cout << "싱글톤패턴 실행" << endl;
	}
	void addValue(int value) {
		total = total + value;
	}
	int getTotalValue() {
		return total;
	}
	void destroy() {
		if (instance != NULL) {
			delete instance; // 여기서 소멸자를 호출하게됨
			instance = NULL;
			cout << "instance 해제" << endl;
		}
	}

};

SingletonClass* SingletonClass::instance = NULL; 
// 포인터를 NULL로 초기화 
// 초기화 하지 않을 경우 안에 쓰레기 값이 있는데
// 이를 참조하게 되어 참조 오류가 발생할 수 있다.

void main() {
	// SingletonClass::getInstance(); // instance  (:: 사용해 static으로 가져옴.)
	// SingletonClass::getInstance()->ShowMessage();

	SingletonClass* ins1 = SingletonClass::getInstance(); // null 값이어서 인스턴스 새로 생성
	SingletonClass* ins2 = SingletonClass::getInstance(); // 생성되어있는 인스턴스 참조
	SingletonClass* ins3 = SingletonClass::getInstance(); // 생성되어있는 인스턴스 참조
	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance()->destroy();
}