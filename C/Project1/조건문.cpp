#include<stdio.h>

// BSD 방식 - main 함수 중괄호 시작시 개행
// K&R 방식 (아래와 같은 방식- 개행X)
void main() {

	int a = 5;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("a는 0보다 큽니다.\n");
	} else if (a < 0) {
		printf("a는 0보다 작습니다.\n");
	} else {
		printf("a는 0입니다.\n");
	}


}