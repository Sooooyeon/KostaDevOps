#include<iostream>
#include<set>

using namespace std;

void main()
{
	/*int arr[] = { 1,2,6,3,4,9 };
	set<int> scon;
	set<int>::iterator it;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
	{
		scon.insert(arr[i]);
	}
	for (it = scon.begin(); it != scon.end(); it++) {
		cout << *it << endl;
	}*/

	const char* str = "fhjfhajkhf";

	// 10개의 데이터를 set 컨테이너로 가져옴
	// set은 정렬하며 중복 요소를 제거
	set<char> scon(&str[0], &str[9]);
	set<char>::iterator it;

	for (it = scon.begin(); it != scon.end(); it++) 
	{
		cout << *it << endl;
	}
	cout << endl;
}