#include<stdio.h>

int LinearSerach(int *arr, int size, int key) {
	for (int i = 0; i < size; i++) {
		if (key == arr[i]) {
			return key;
		}
	}
	return -1;
}

void main() 
{

	int arr[] = { 6, 4, 2, 3, 7, 8, 5, 9, 10, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	// �˻� 
	// scanf�� ���ؼ� �Է¹��� ���� ��ġ ã��
	int key = 0;
	scanf_s("%d", &key);

	/*for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (key == arr[i]) {
			printf("�˻� �Ǿ����ϴ�\n");
			return;
		}
	}*/

	// printf("�˻��� ����Ǿ����ϴ�.\n");


	// �迭�� �̸��� �ּ�
	int res = LinearSerach(arr, size, key);

	if (res != -1) {
		printf("�˻� �Ǿ����ϴ�.\n");
		return;
	}
	printf("�˻� ���� �ʾҽ��ϴ�.\n");
}


