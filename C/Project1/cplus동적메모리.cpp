#include<iostream>

using namespace std;

void main() 
{
	int stLen = 0;

	cout << "�л� ���� �Է��ϼ��� : " << endl;
	cin >> stLen;

	int* pMem = new int[stLen];
	// �����Ϳ� new Ű���� ��� - ���� ���� �޸� �Ҵ�
	// �Ҵ�� �ּҸ� pMem�� ����
	// �����޸𸮴� ��Ÿ�ӽ� ����ǹǷ� stLen�� �Է��� �� ����

	

	for (int i = 0; i < stLen; i++) {
		pMem[i] = i + 1;
	}
	for (int i = 0; i < stLen; i++) {
		cout << pMem[i] << endl;
	}

	delete[] pMem; // �迭�� �����Ҷ��� [] ǥ�� �ʿ�
}