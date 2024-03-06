#include<stdio.h>

void main(){
	// 런타임시 배열의 길이가 변하면 오류가 발생할 수 있다.
	// 따라서 배열의 길이는 무조건 상수 선언

	int array[3];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;

	printf("배열 요소의 출력: %d, %d, %d\n", array[0], array[1], array[2]);




	/*int array2[5];*/
	// int array2[5] = { 1,2,3,4,5 };
	int array2[] = { 1,2,3,4,5 };

	double total = 0;

	//for (int i = 0; i < 5; i++) {
	//	printf("정수를 입력하세요: ");
	//	scanf_s("%d", &array2[i]);
	//}

	for (int i = 0; i < 5; i++) {
		total = total + array2[i];
	}

	double avg = total / 5;

	printf("배열 요소의 출력: %d, %d, %d, %d, %d\n", array2[0], array2[1], array2[2], array2[3], array2[4]);
	printf("배열 요소의 합: %.0f\n배열 요소의 평균: %.2f\n", total, avg);



	int array3[5] = { 1,2 };
	printf("배열 요소의 출력: %d, %d, %d, %d, %d\n", array3[0], array3[1], array3[2], array3[3], array3[4]);



	// 배열은 상수(주소값)이기때문에 대입 연산자를 통해 값을 넘겨받을 수 없다.
	// 첫번째 인덱스의 주소가 배열의 주소이다.
	// 배열은 요소끼리 복사해야 한다.

	int array4[5] = { 1,2,3,4,5 };
	int array5[5];
	for (int i = 0; i < sizeof(array4)/ sizeof(array4[0]); i++) {
		 /* 연산자 sizeof를 사용해 해당 요소의 크기를 알 수 있다. 
		 배열의 경우 원소의 갯수만큼 반복하기 위해
		 배열 전체의 사이즈를 배열의 첫번째 인덱스의 사이스로 나눈값을 사용한다. */
		array5[i] = array4[i];
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", array5[i]);
	}	
}