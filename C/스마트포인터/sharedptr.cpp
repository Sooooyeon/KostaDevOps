#include<iostream>
#include<memory>
#include<string>

using namespace std;

void main() {
	auto_ptr<int> ptr1 = auto_ptr<int>(new int(10));
	shared_ptr<int> ptr2 = shared_ptr<int>(new int(50));

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}