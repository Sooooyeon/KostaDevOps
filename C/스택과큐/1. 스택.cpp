#include<stdio.h>
#include<stdlib.h>

int* stack;
int size;
int top;

int push(int data) {
	if (top < size - 1) {
		top++;
		stack[top] = data;
		return 1;
	}
	else {
		return 0;
	}
}

int pop() {
	if (top >= 0) {
		return stack[top--];
	}
	else {
		return -1;
	}
}

void main() {
	size = 3;
	// malloc(size * sizeof(int));     size을 저장하기 위한 메모리 생성
	stack = (int*)malloc(size * sizeof(int));
	top = -1;

	push(7);
	push(5);
	push(10);

	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

	free(stack);
}