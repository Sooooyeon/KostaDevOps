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

	// ����Ʈ�� �����ͷ� ����Ǿ� �־ �ε����� ���� �Ұ���
	// ���� �ݺ��ڸ� ���� ��ü ���� ���� ������
	// iterator �� �迭�� ��Ҹ� ����Ű�� ������
	list<int>::iterator it;
	for ( it = lst.begin(); it != lst.end(); it++ ){
		cout << *it << endl;
	}
}