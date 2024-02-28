

// 우클릭 - 추가 - 새 항목
/* 
 #이 붙으면 전처리기를 나타낸다.
.h가 붙어 있는 파일은 헤더 파일이라고 부른다.
 stdio.h를 포함하지 않으면 printf 함수를 사용할 수 없다.
 stdio 헤더 파일 안에 표준 입출력 함수가 있다.
 return 0은 함수의 종료를 의미
*/
#include<stdio.h>

int main() {
	/*
	printf("Hello World\n");
	printf("장수연\n");
	printf("경기도 의정부시 가능동\n");
	printf("010-1234-5678\n");
	printf("장수연\n경기도 의정부시 가능동\n010-1234-5678\n");
	*/

	// 선언만 하고 값을 대입하지 않는 경우 
	// → 메모리에는 쓰레기 값이 있음. 
	// 따라서 선언과 동시에 초기화 하는 것이 좋다.


	// 정수형 출력
	/*
	int value;
	int num = 5;
	value = 100;
	printf("%d\n %d\n", value, num);
	*/
	// 숫자를 출력할때는 서식문자를 사용한다.
	// d는 decimal로10진수 형태의 숫자를 출력함을 의미한다.
	// 실수를 출력할때는 f를 사용한다.


	// 문자형 출력
	int value = 100;
	char ch = 'C';

	printf("출력결과: 정수 %d, 문자 %c\n", value, ch);


	// 숫자와 성적 출력
	int age = 18;
	char grade = 'A';

	printf("이름: 장수연\n나이: %d\n성적: %c\n", age, grade);


	// 사각형 넓이 구하기
	int width = 10;
	int height = 20;

	printf("사각형의 넓이: %d\n", width * height);


	// 원의 넓이 구하기
	double area = 0.0;
	int radius = 5;

	area = radius* radius * 3.14;

	printf("원의 넓이: %f\n", area);


	// 문자형 10진수로 출력하기
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = '1';

	printf("%c %c %c\n", ch1, ch2, ch3);
	printf("%d %d %d\n", ch1, ch2, ch3);

	printf("'A'는 아스키 코드표로 %d\n'B'는 아스키 코드표로 %d\n'1'는 아스키 코드표로 %d\n", ch1, ch2, ch3);


	// 사용자로부터 데이터 입력 scanf
	int input1 = 0;
	int input2 = 0;

	printf("정수를 입력하세요:");
	scanf_s("%d%d", &input1, &input2);
	// 입력받을때는 메모리 주소를 알려줘야한다.
	// 여러개의 수를 입력받을때는 스페이스바 혹은 엔터로 구분

	//printf("정수를 입력하세요:");
	//scanf_s("%d", &input2);

	printf("두 수의 합:%d\n", input1+input2);

	return 0;
}




