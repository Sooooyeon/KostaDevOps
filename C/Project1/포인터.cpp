#include<stdio.h>

void main() {
	int b = 100;
	int* pB = &b;

	printf("b 는 %d\n", b);
	printf("b의 주소값은 %d\n", &b);
	printf("b의 주소값은 %p\n", &b);

	printf("b의 주소값은 %p\n", pB);
	printf("b는 %d\n", *pB);


}