#include<iostream>
#include<vector>

using namespace std;

void main()
{
	int i = 0;
	int num = 0;
	cout << "배열의 크기 입력 : ";
	cin >> num;

	// vector 클래스로 정수형 arr객체를 생성
	vector<int> arr;

	for (i = 0; i < num; i++) {
		arr.push_back(i);
	}
	for (i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}


}