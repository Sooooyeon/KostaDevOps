#include<iostream>
#include<deque>

using namespace std;

void main()
{
	deque <int> num;

	num.push_back(5);
	num.push_back(6);
	num.push_front(7);
	num.push_front(8);

	for (int i = 0; i < num.size(); i++) 
	{
		cout << num[i] << " ";
	}
	cout << endl;
}