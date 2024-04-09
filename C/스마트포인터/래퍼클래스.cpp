#include<iostream>

using namespace std;

template <class T>
class SmartPointer {
private:
	T* p;
public:
	// SmartPointer(T* sp) : p(sp) {} -> 바로 아래와 같은 코드
	SmartPointer(T *sp){
		p = sp;
	}
	~SmartPointer() {
		delete p;
	}

	T& operator*() const {
		return *p;
	}
};

void main() {
	SmartPointer<string> str(new string("test"));  // sp = new string("test")
	// cout << str.operator*() << endl;
	cout << *str << endl; // 바로 윗 줄의 코드와 같은 의미
}