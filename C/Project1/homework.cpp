#include<stdio.h>
#pragma warning(disable:4996)

int pageCount = 0;

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

	int i = 1;
	for (i = 1; i < 101; i++) {
		printf("���� : %d\n", i);
	}
	printf("������ �Ϸ�Ǿ����ϴ�.");

	int pages = 0;

	printf("���� å���� ������ ���� �Է����ּ���.");
	scanf("%d", &pages);

	do {
		pageCount = pageCount + pages;
	} while (pages != -1);

	return 0;

}