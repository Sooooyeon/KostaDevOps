#include<stdio.h>

// call by value - 값을 복사 후 사용하기때문에 원본이 유지됨

void Swap(int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);
}

void main() {
	int x = 10;
	int y = 20;
	printf("x = %d, y = %d\n", x, y);
	Swap(x, y);
	printf("x = %d, y = %d\n", x, y);

}