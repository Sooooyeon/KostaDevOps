#include<stdio.h>
#include<string.h>

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}


void main() {


	//// void형 포인터는 메모리 주소값을 저장하기 위한 포인터형
	//// 포인터 변수는 무조건 4바이트 메모리가 할당.
	//// void형 포인터도 4바이트 할당 
	//// 직접 참조가 가능한 값은 저장할 수 없지만, 주소값은 저장 가능.

	//void* a;
	//int b = 1234;

	//a = &b;

	//printf("%d\n", a);
	//printf("%d\n", *(int*)a);







	//// 함수포인터 -> 함수를 담는 포인터 변수
	//// 구조 Int(*func)(int a)
	//// 자료형 + 함수포인터 + 전달인자의 구조,
	//// 전달인자에 맞게 자료형 표기

	//int x, y;
	//int(*fPtr)(int a, int b);

	//printf("두 정수를 입력하세요:");
	//scanf_s("%d%d", &x, &y);

	//// 런타임시 함수포인터에 기능을 가진 함수가 동적할당됨 
	//// 메인 함수는 건들지 않으면서 함수포인터로 확장이 가능
	//// (메인함수 컴파일을 다시 하지 않아도 되는 장점을 가짐)
	//fPtr = Plus;
	//// int res = Plus(x, y);
	//int res = fPtr(x, y);
	//printf("결과 = %d", res);

	//fPtr = Minus;
	//res = fPtr(x, y);
	//printf("결과 = %d", res);








	// NULL 포인터
	// NULL 포인터 체크는 반드시해줘야한다.(예외처리)
	char str[] = "Love";
	char* p;

	// 원하는 문자를 찾는 메서드
	p = strchr(str, 'v');

	if (p != NULL) {
		*p = 'b';
		printf("변경결과: %s\n", str);
	}
	else {
		printf("NULL을 리턴하였습니다.\n");
	}


}
