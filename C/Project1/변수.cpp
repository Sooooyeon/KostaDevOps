#include<stdio.h>
void func1();
void func2();

int global;


//int Add(int a, int b)
//{
//	int res = a + b;
//	return res;
//}

void Add(int a, int b)
{
	global = a + b;
}

void main() 
{
	int val = 0;
	printf("ù ��° �޸� �Ҵ�: val = 0\n");
	func1();
	printf("�� ��° �޸� �Ҵ�: local = 10\n");

	int a = 0;
	int b = 0;
	printf("�� ���� �Է��ϼ���: ");
	scanf_s("%d%d", &a, &b);

	Add(a, b);
	printf("�� ������ ��: %d\n", global);
}

void func1() 
{
	// ��������
	int val = 10;
	printf("�� ��° �޸� �Ҵ�: val = 10\n");
	func2();
	printf("ù ��° �޸� �Ҵ�: local = 20\n");
}

void func2() 
{
	// ��������
	int val = 20;
	printf("�� ��° �޸� �Ҵ�: val = 30\n");
}