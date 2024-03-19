#include<iostream>

using namespace std;

void main() 
{
	int stLen = 0;

	cout << "학생 수를 입력하세요 : " << endl;
	cin >> stLen;

	int* pMem = new int[stLen];
	// 포인터에 new 키워드 사용 - 힙에 동적 메모리 할당
	// 할당된 주소를 pMem이 받음
	// 동적메모리는 런타임시 실행되므로 stLen를 입력할 수 있음

	

	for (int i = 0; i < stLen; i++) {
		pMem[i] = i + 1;
	}
	for (int i = 0; i < stLen; i++) {
		cout << pMem[i] << endl;
	}

	delete[] pMem; // 배열을 삭제할때는 [] 표시 필요
}