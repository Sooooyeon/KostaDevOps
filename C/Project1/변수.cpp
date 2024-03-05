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
	printf("첫 번째 메모리 할당: val = 0\n");
	func1();
	printf("두 번째 메모리 할당: local = 10\n");

	int a = 0;
	int b = 0;
	printf("두 수를 입력하세요: ");
	scanf_s("%d%d", &a, &b);

	Add(a, b);
	printf("두 정수의 합: %d\n", global);
}

void func1() 
{
	// 지역변수
	int val = 10;
	printf("두 번째 메모리 할당: val = 10\n");
	func2();
	printf("첫 번째 메모리 할당: local = 20\n");
}

void func2() 
{
	// 지역변수
	int val = 20;
	printf("세 번째 메모리 할당: val = 30\n");
}