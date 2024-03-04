#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	/*int i = 0;
	while (i < 5)
	{
		printf("programing\n");
		i++;
	}

	int j = 1;
	while (j<10) {
		printf("2 * %d = %d\n", j, 2*j);
		j++;
	}

	int k = 0;
	while (false) {
		printf("progaming\n");
		if (k > 100) return;
		k++;
	}


	int x = 0;

	do {
		printf("programing\n");
		x++;
	} while (i < 5);*/

	// do while문은 언제 사용하는가
	// 입력받은 값을 조건으로 사용하는 경우
	/*int y = 0;
	int sum = 0;

	do {
		printf("정수를 입력하세요 : \n");
		scanf("%d", &y);
		sum = sum + y;
	} while (y != 0);
	printf("총합: %d", sum);*/



	// do while문을 사용하지 않고 while문을 사용하면
	// 입력을 받는 코드가 중복되게 됨
	/*int z = 1;
	int sum2 = 0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &z);

	while (z != 0) {
		sum2 = sum2 + z;
		scanf("%d", &z);
	}

	printf("총합: %d", sum2);*/



	/*int i = 0;
	for (i = 0; i < 5; i++) {
		printf("programing\n");
	}*/

	/*int i = 1;
	for (i = 1; i < 10; i++) {
		printf("2 * %d = %d\n", i, 2*i);
	}

	int num = 0;
	printf("숫자를 입력해주세요:");
	scanf("%d", &num);
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}*/

	/*for (i = 1; i < 13; i++) {
		printf("%d월\n",i);
	}*/

	/*int i = 1;

	while (i<13) {
		printf("%d월\n", i);
		i++;
	}*/

	/*int i = 1;

	do {
		printf("%d월\n", i);
		i++;
	} while (i<13);*/


	// break문
	/*int a = 0;

	while(true){
		if (a > 100) {
			break;
		}
		printf("a: %d\n", a);
		a++;
	}
	printf("a는 100보다 크다");*/



	// continue문
	/*int a = 0;
	while (a < 100) {
		a++;

		if (a > 80 && a < 90) {
			continue;
		}
		printf("a의값은 %d\n", a);
	}*/

	// 구구단 for 문 
	/*for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	int i = 0;
	int j = 0;
	for (i = 1; i < 5; i++) {
		
	}

	return 0;
}