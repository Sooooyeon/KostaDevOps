#include<stdio.h>

void main() {
	//int arr[] = { 1,2,3,4,5 };

	//printf("�迭�� ��� ���:\n");
	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n",arr[i]);
	//	printf("%d\n", *(arr + i));

	//}
	//printf("%d\n", arr);
	//printf("%x\n", arr);
	//// x�� 16������ ����� �ǹ�

	//printf("%d\n", *(arr + 1));
	//// *(arr + 1) == 2



	//// �迭�� �̸� == �������̹Ƿ� �����͸� �迭�� �̸����� �̿��� �� �ִ�.

	int arr[] = { 1,2,3,4,5 };
	
	// ����Ʈ ���� - �ּҰ��� �����ϴ� ����
	int* pTemp;

	// �迭 arr�� �ּҰ��� ����
	pTemp = &arr[0];
	pTemp = arr;

	printf("�迭�� ��� ���:");
	printf("%d\n", pTemp); // �迭�� ���� �ּ�

	// pTemp[0]- �迭�� ù��° ���� �ǹ��ϰԵ�
	printf("%d\n", pTemp[0]);
	printf("%d\n", pTemp[1]);
	printf("%d\n", pTemp[2]);
	printf("%d\n", pTemp[3]);
	printf("%d\n", pTemp[4]);

	for (int i = 0; i < 5; i++)
	{
		printf("%d", pTemp[i]);
	}




 

}