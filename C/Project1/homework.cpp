#include<stdio.h>
#pragma warning(disable:4996)

// int pageCount = 0;

int main() {

	/*int input = 0;
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &input);
	printf("5�� ���� ���: %d\n", input * 5);*/


	/*int input1 = 0;
	int input2 = 0;
	printf("�ΰ��� ������ �Է��ϼ���:");
	scanf_s("%d%d", &input1, &input2);
	printf("�Է��� ����: %d, %d\n", input1, input2);*/


	/*char input;
	printf("���ĺ� �ϳ��� �Է����ּ���:");
	scanf_s("%c", &input);
	printf("���: %d\n",input);*/


	/*int input1 = 0;
	int input2 = 0;
	printf("�ΰ��� ������ �Է��ϼ���:");
	scanf_s("%d%d", &input1, &input2);
	printf("�� ���� ��: %d\n", input1 + input2);
	printf("�� ���� ��: %d\n", input1 - input2);
	printf("�� ���� ��: %d\n", input1 * input2);
	printf("�� ���� ������ ��: %d\n", input1 / input2);*/


	/*int num1,num2,num3 = 0;
	printf("�� ���� ������ �Է��ϼ���:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("�� ���� ����: %d �Դϴ�.\n", num1 * num2 * num3);*/


	/*int num1, num2, num3 = 0;
	printf("�� ���� ������ �Է��ϼ���:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("���: %d + %d * %d = %d\n", num1, num2, num3, num1 + (num2 * num3));*/


	/*int num1, num2, num3 = 0;
	printf("�� ���� ������ �Է��ϼ���:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("�� ���� ��: %d\n", num1 + num2 + num3);
	printf("�� ���� ���: %f\n", (num1 + num2 + num3)/3);*/

	/*int i = 0;
	while (i<10) {
		printf("*");
		i++;
	}*/


	/*int i = 1;
	while (i < 13) {
		printf("%d��\n",i);
		i++;
	}*/

	/*int i = 1;
	int num = 0;
	printf("���ڸ� �Է����ּ���: ");
	scanf("%d", &num);
	while (i < 10) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}*/


	/*int i = 1;
	while (i < 51) {
		printf("%d\n", 2 * i);
		i++;
	}*/

	/*int i = 1;
	int sum = 0;
	while (i < 11) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);*/


	/*int i = 0;
	int sum = 0;
	printf("1���� � �������� ���Ͻðڽ��ϱ�?");
	scanf("%d", &i);
	while (i>0) {
		sum = sum + i;
		i--;
	}
	printf("%d", sum);*/

	/*int i = 1;
	for (i = 1; i < 101; i++) {
		printf("���� : %d\n", i);
	}
	printf("������ �Ϸ�Ǿ����ϴ�.");*/

	/*int pages = 0;

	static int spages = 0;

	while (pages != -1) {
		printf("���� å���� ������ ���� �Է����ּ���.");
		scanf("%d", &pages);
		if (pages == -1) break;
		pageCount = pageCount + pages;
		spages = spages + pages;
	}

	printf("���� ���� ������: %d\n", pageCount);
	printf("���� ���� ������: %d\n", spages);*/

	//int arr1[] = { 1,2,3 };
	//int arr2[3];

	//for (int i = 0; i < 3; i++) {
	//	arr2[i] = arr1[i];
	//	printf("arr2[%d]:%d\n", i, arr2[i]);
	//}

//int arr1[] = { 1,2,3,4,5 };
//int arr2[5];
//
//for (int i = 4; i >= 0; i--) {
//	arr2[i] = arr1[4 - i];
//}
//for (int i = 0; i < 5; i++) {
//	printf("arr2[%d]:%d\n", i, arr2[i]);
//}

//char a = 'F';
//int b = 5;
//char* pA = &a;
//int* pB = &b;
//
//printf("pA�� ����Ű�� �ִ� ������ ���� ��: %c \n", *pA);
//printf("pB�� ����Ű�� �ִ� ������ ���� ��: %d \n", *pB);

//int arr[] = { 1,2,3,4,5 };
//int* ptr = arr;
//printf("��� ���� : %d", *(ptr + 2));

//char a = 'C';
//int b = 10;
//double c = 3.14;
//
//char* pA = &a;
//int* pB = &b;
//double* pC = &c;
//printf("a�� 1���� : %c\n", *pA + 1);
//printf("b�� 1���� : %d\n", *pB + 1);
//printf("c�� 1���� : %.2f\n", *pC + 1);

//int maxNum = 0;
//
//int arr[] = { 3,5,2,11,10 };
//
//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//	if (arr[i] > arr[i - 1]) {
//		maxNum = arr[i];
//	}
//	else {
//		maxNum = arr[i - 1];
//	}
//}
//
//printf("���� ū ���� : %d", maxNum);


	return 0;

}