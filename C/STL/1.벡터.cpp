#include<iostream>
#include<vector>

using namespace std;

void main()
{
	int i = 0;
	int num = 0;
	cout << "�迭�� ũ�� �Է� : ";
	cin >> num;

	// vector Ŭ������ ������ arr��ü�� ����
	vector<int> arr;

	for (i = 0; i < num; i++) {
		arr.push_back(i);
	}
	for (i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}

	vector<int>::iterator it;

	for (it = arr.begin(), i=0; it != arr.end(); it++, i++)
	{
		cout << arr[i] << endl;
		cout << *it << endl;
	}
}