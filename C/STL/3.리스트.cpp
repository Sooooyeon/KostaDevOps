#include<iostream>
#include<list>

using namespace std;

void main()
{
	list <int> lst;

	int i;
	for (i = 0; i < 5; i++) {
		lst.push_back(i);
	}

	// 리스트는 포인터로 연결되어 있어서 인덱스로 접근 불가능
	// 따라서 반복자를 통해 객체 안의 값을 가져옴
	// iterator 는 배열의 요소를 가르키는 포인터
	list<int>::iterator it;
	for ( it = lst.begin(); it != lst.end(); it++ ){
		cout << *it << endl;
	}
}