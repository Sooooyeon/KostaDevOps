#include<stdio.h>

void main() {
	int b = 100;
	int* pB = &b;

	printf("b �� %d\n", b);
	printf("b�� �ּҰ��� %d\n", &b);
	printf("b�� �ּҰ��� %p\n", &b);

	printf("b�� �ּҰ��� %p\n", pB);
	printf("b�� %d\n", *pB);


}