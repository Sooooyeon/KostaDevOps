#include<stdio.h>

// call by reference - �ּҰ����� �ش� �޸𸮸� �����ؼ� ���

void Swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("a = %d, b = %d\n", *a, *b);
}

void main() {
	int x = 10;
	int y = 20;
	printf("x = %d, y = %d\n", x, y);
	printf("x = %d, y = %d\n", &x, &y);

	Swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	printf("x = %d, y = %d\n", &x, &y);


}