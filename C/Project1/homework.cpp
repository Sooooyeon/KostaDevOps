#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	/*int input = 0;
	printf("정수를 입력하세요:");
	scanf_s("%d", &input);
	printf("5를 곱한 결과: %d\n", input * 5);*/


	/*int input1 = 0;
	int input2 = 0;
	printf("두개의 정수를 입력하세요:");
	scanf_s("%d%d", &input1, &input2);
	printf("입력한 정수: %d, %d\n", input1, input2);*/


	/*char input;
	printf("알파벳 하나를 입력해주세요:");
	scanf_s("%c", &input);
	printf("출력: %d\n",input);*/


	/*int input1 = 0;
	int input2 = 0;
	printf("두개의 정수를 입력하세요:");
	scanf_s("%d%d", &input1, &input2);
	printf("두 수의 합: %d\n", input1 + input2);
	printf("두 수의 차: %d\n", input1 - input2);
	printf("두 수의 곱: %d\n", input1 * input2);
	printf("두 수의 나누기 몫: %d\n", input1 / input2);*/


	/*int num1,num2,num3 = 0;
	printf("세 개의 정수를 입력하세요:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("세 수의 곱은: %d 입니다.\n", num1 * num2 * num3);*/


	/*int num1, num2, num3 = 0;
	printf("세 개의 정수를 입력하세요:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("출력: %d + %d * %d = %d\n", num1, num2, num3, num1 + (num2 * num3));*/


	/*int num1, num2, num3 = 0;
	printf("세 개의 정수를 입력하세요:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("세 수의 합: %d\n", num1 + num2 + num3);
	printf("세 수의 평균: %f\n", (num1 + num2 + num3)/3);*/

	/*int i = 0;
	while (i<10) {
		printf("*");
		i++;
	}*/


	/*int i = 1;
	while (i < 13) {
		printf("%d월\n",i);
		i++;
	}*/

	/*int i = 1;
	int num = 0;
	printf("숫자를 입력해주세요: ");
	scanf("%d", &num);
	while (i < 10) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}*/


	/*int i = 1;
	while (i < 51) {
		printf("%d\n", 2 * i);
		i++;
	}*/

	/*int i = 1;
	int sum = 0;
	while (i < 11) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);*/


	/*int i = 0;
	int sum = 0;
	printf("1부터 어떤 정수까지 더하시겠습니까?");
	scanf("%d", &i);
	while (i>0) {
		sum = sum + i;
		i--;
	}
	printf("%d", sum);*/

	int i = 1;
	for (i = 1; i < 101; i++) {
		printf("충전 : %d\n", i);
	}
	printf("충전이 완료되었습니다.");


	return 0;

}