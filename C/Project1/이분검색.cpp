#include<stdio.h>

void main()
{
	int arr[] = { 2,6,13,19,21,23,29,35,48,62,89,90,95,99,102,109,208,629 };

	int key = 29;

	int size = sizeof(arr) / sizeof(arr[0]);

	int upper, lower, middle;

	lower = 0;
	upper = size - 1;

	scanf_s("%d", &key);

	int count = 0;

	for (;;) 
	{
		count++;

		middle = (lower + upper) / 2;

		if (arr[middle] == key) {
			printf("�ش� ��Ұ� �˻��Ǿ����ϴ�.");
			break;
		}

		if (arr[middle] > key) {
			upper = middle -1;
		}
		else {
			lower = middle + 1;
		}

		if (upper <= lower) {
			printf("�˻����� �ʾҽ��ϴ�.");
			break;
		}
	}

	printf("�� Ƚ���� %d", count);


}
