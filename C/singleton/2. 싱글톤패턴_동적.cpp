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
		cout << "�Ҹ�" << endl;
	}
	static SingletonClass* getInstance() {
		if (instance == NULL) 
			instance = new SingletonClass();
		return instance;
	}
	void ShowMessage() {
		cout << "�̱������� ����" << endl;
	}
	void addValue(int value) {
		total = total + value;
	}
	int getTotalValue() {
		return total;
	}
	void destroy() {
		if (instance != NULL) {
			delete instance; // ���⼭ �Ҹ��ڸ� ȣ���ϰԵ�
			instance = NULL;
			cout << "instance ����" << endl;
		}
	}

};

SingletonClass* SingletonClass::instance = NULL; 
// �����͸� NULL�� �ʱ�ȭ 
// �ʱ�ȭ ���� ���� ��� �ȿ� ������ ���� �ִµ�
// �̸� �����ϰ� �Ǿ� ���� ������ �߻��� �� �ִ�.

void main() {
	// SingletonClass::getInstance(); // instance  (:: ����� static���� ������.)
	// SingletonClass::getInstance()->ShowMessage();

	SingletonClass* ins1 = SingletonClass::getInstance(); // null ���̾ �ν��Ͻ� ���� ����
	SingletonClass* ins2 = SingletonClass::getInstance(); // �����Ǿ��ִ� �ν��Ͻ� ����
	SingletonClass* ins3 = SingletonClass::getInstance(); // �����Ǿ��ִ� �ν��Ͻ� ����
	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance()->destroy();
}