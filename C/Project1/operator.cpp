#include<stdio.h>

void main() {
	// 산술 연산자
	//int a = 5;
	//int b = 3;

	//printf("두 수의 합: %d\n", a + b);
	//printf("두 수의 차: %d\n", a - b);
	//printf("두 수의 곱: %d\n", a * b);
	//printf("두 수의 나누기: %d\n", a / b);
	//printf("두 수의 나머지: %d\n", a % b);



	// 대입 연산자
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



	// 증감 연산자
	//int c = 5;
	//int d = 10;

	//printf("++c 처리결과: %d\n", ++c); // 6
	//c = 5;
	//printf("++c 처리결과: %d\n", c++); // 5
	//printf("c 처리결과: %d\n", c); // 6

	//printf("--d 처리결과: %d\n", --d); // 9
	//d = 10;
	//printf("d-- 처리결과: %d\n", d--); // 10
	//printf("d 처리결과: %d\n", d); // 9



	// 관계|논리 연산자
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