// ��ü ����� : �ؽ����̺�, 2���� �迭
// ��Ŷ�� �ʼ� �������� ����
// ���� : ��Ŷ�� �����Ͱ� ����Ǵ� ����

#include<stdio.h>
#include<string.h>

			// ��Ŷ�� �� , ������ ��
int hashTable[10][1];

int Hash(int pKey) { // ��Ŷ����
	return pKey % 10;
}

void main() 
{
	int key = 0;
	int bucket = 0;

	memset(hashTable, 0, sizeof(hashTable)); // ������ ���� 0���� �ʱ�ȭ
	scanf_s("%d", &key);

	bucket = Hash(key);
	hashTable[bucket][0] = key;
}
