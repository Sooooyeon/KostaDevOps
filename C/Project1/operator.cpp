#include<stdio.h>

void main() {
	// ��� ������
	//int a = 5;
	//int b = 3;

	//printf("�� ���� ��: %d\n", a + b);
	//printf("�� ���� ��: %d\n", a - b);
	//printf("�� ���� ��: %d\n", a * b);
	//printf("�� ���� ������: %d\n", a / b);
	//printf("�� ���� ������: %d\n", a % b);



	// ���� ������
	//int a = 5;
	//int b = 3;
	//
	//a += b; // a = a + b;
	//printf("%d\n", a); // 8

	//a -= b;; // a = a - b;
	//printf("%d\n", a); // 5

	//a *= b;; // a = a * b;
	//printf("%d\n", a); // 15

	//a /= b;; // a = a / b;
	//printf("%d\n", a); // 5

	//a %= b;; // a = a % b;
	//printf("%d\n", a); // 2



	// ���� ������
	//int c = 5;
	//int d = 10;

	//printf("++c ó�����: %d\n", ++c); // 6
	//c = 5;
	//printf("++c ó�����: %d\n", c++); // 5
	//printf("c ó�����: %d\n", c); // 6

	//printf("--d ó�����: %d\n", --d); // 9
	//d = 10;
	//printf("d-- ó�����: %d\n", d--); // 10
	//printf("d ó�����: %d\n", d); // 9



	// ����|�� ������
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	//printf("a==b: %d\n", a == b);
	//printf("a < b: %d\n", a < b);
	//printf("a >= c: %d\n", a >= c);
	//printf("a == d: %d\n", a == d);

	printf("%d\n", !(a == d)); // 0
	printf("%d\n", (a < b) && (a < c)); // 1
	printf("%d\n", (a < b) && (a > c)); // 0
	printf("%d\n", (a < b) || (a > c)); // 1
	printf("%d\n", (a >= c) || (a > c)); // 0





}