#include<stdio.h>

// 공용체는 메모리 공간을 공유
// 가장큰 자료형의 메모리를 나눠서 사용

union unTemp {
	char a;
	int b;
	double c;
}un;

void main() {
	printf("%d\n", sizeof(un.a)); // 1
	printf("%d\n", sizeof(un.b)); // 4
	printf("%d\n", sizeof(un.c)); // 8

	un.a = 'A';
	printf("%c\n", un.a);
	un.b = 100;
	printf("%d\n", un.b);
	un.c = 3.14;
	printf("%f\n", un.c);
	printf("%c\n", un.a); // 쓰레기 값이 출력됨 (메모리를 공유하고 있기 때문)
	// 메모리의 최종값은 3.14인데 이중에 1바이트만 출력하려고 하는 상황


}