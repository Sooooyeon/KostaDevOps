#include<stdio.h>

int func(int* pArr, int size) {
	// �ּҰ��� �޾ƾ��ϱ⶧���� *�� �پ����

	/*	printf("pArr: %x\n", pArr);
	printf("pArr[0]:%x\n", *pArr);
	printf("pArr[1]:%x\n", *(pArr+1));
	printf("pArr[1]:%x\n", *(pArr) + 1);

	printf("pArr[0]: %x\n", pArr[0]);
	printf("pArr[1]: %x\n", pArr[1]);
	printf("pArr[2]: %x\n", pArr[2]);
	printf("pArr[3]: %x\n", pArr[3]);*/

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + *(pArr + i);
	}


	return sum;
}

void main() {
	int arr[] = { 1,2,3,4,5 };
	int* pArr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	// �Լ� ȣ�� �� �迭�� �̸��� ������ �迭�� �����ϰڴٴ� �ǹ�
	// �迭�� ���� �ּҸ� �ѱ�� �ȴ�.
	// �迭�� ����� �ʿ��ϴٸ� �迭�� ����� �Բ� �Ѱ�����Ѵ�.
	int sumArr = func(arr, size);
	printf("������: %d\n", sumArr);

	// printf("arr: %x\n", arr);

}