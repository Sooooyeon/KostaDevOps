#include<iostream>

using namespace std;

void main() {
	// �����迭
	/*int arr[] = { 1,2,3,4,5 };
	int* pNum;

	for (pNum = arr; pNum != &arr[5]; pNum++) {
		cout << *pNum << " ";
	}
	cout << endl;*/


	// ���ڹ迭
	char arr[] = "programming";
	char* pArr;

	for (pArr = arr; pArr != &arr[12]; pArr++) {
		cout << *pArr << " ";
	}
	cout << endl;
}
