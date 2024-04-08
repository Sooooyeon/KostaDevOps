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
		cout << "½Ì±ÛÅæÆÐÅÏ ½ÇÇà" << endl;
	}
};

SingletonClass SingletonClass::instance;

void main() {
	SingletonClass::getInstance(); // instance ¸¦ :: »ç¿ëÇØ staticÀ¸·Î °¡Á®¿È.
	SingletonClass::getInstance().ShowMessage();
}