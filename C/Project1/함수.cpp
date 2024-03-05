#include<stdio.h>

int Add(int a, int b);
int Mul(int a);
int Rect(int width, int height);
double Circle(int r);
void Plus(int a, int b);
void Minus(int a, int b);
void Multiple(int a, int b);
void Divide(int a, int b);
void CompareNum(int a, int b);
void Max(int a, int b);
void Min(int a, int b);



void print_Hap(int result) {
	printf("더한 결과값은 %d입니다.\n", result);
}

int main(){
	//int i = 5;
	//int j = 3;
	//int addNum = Add(i, j);
	//// call by value 값이 - a, b에 복사됨

	//print_Hap(addNum);

	//int mulTwo = Mul(3);
	//printf("곱한 결과값은 %d입니다.\n", mulTwo);


	//int width = 0;
	//int height = 0;
	//printf("가로의 길이와 세로의 길이를 입력해주세요.");
	//scanf_s("%d%d", &width, &height);

	//int rect = Rect(width, height);
	//printf("사각형의 넓이는 %d입니다.\n", rect);


	//int r = 0;
	//printf("원의 반지름을 입력해주세요.");
	//scanf_s("%d", &r);

	//double circle = Circle(r);
	//printf("원의 넓이는 %.2f입니다.", circle);


	int a = 0;
	int b = 0;

	printf("두 정수를 입력하세요: ");
	scanf_s("%d%d", &a, &b);

	/*Plus(a, b);
	Minus(a, b);
	Multiple(a, b);
	Divide(a, b);*/

	CompareNum(a, b);
	Max(a, b);
	Min(a, b);

}


void Plus(int a, int b) {
	printf("두 수의 합 : %d\n", a + b);
}

void Minus(int a, int b) {
	printf("두 수의 차 : %d\n", a - b);
}

void Multiple(int a, int b) {
	printf("두 수의 곱 : %d\n", a * b);
}

void Divide(int a, int b) {
	printf("두 수의 나누기 : %d\n", a / b);
}

void CompareNum(int a, int b) {
	if (a > b) {
		printf("최대값 : %d\n", a);
		printf("최소값 : %d\n", b);
	}
	else if (a < b){
		printf("최대값 : %d\n", b);
		printf("최소값 : %d\n", a);
	}
	else if ( a == b ) {
		printf("두 수는 같습니다.\n");
	}
	else {
		printf("입력한 숫자가 올바르지 않습니다.\n");
	}
}

void Max(int a, int b) {
	if (a > b) {
		printf("최대값 : %d\n", a);
	}
	else if (a < b) {
		printf("최대값 : %d\n", b);
	}
	else if (a == b) {
		printf("두 수는 같습니다.\n");
	}
	else {
		printf("입력한 숫자가 올바르지 않습니다.\n");
	}
}

void Min(int a, int b) {
	if (a > b) {
		printf("최소값 : %d\n", b);
	}
	else if (a < b) {
		printf("최소값 : %d\n", a);
	}
	else if (a == b) {
		printf("두 수는 같습니다.\n");
	}
	else {
		printf("입력한 숫자가 올바르지 않습니다.\n");
	}
}

int Add(int a, int b)
{
	int res = a + b;
	return res;
}

int Mul(int a) {
	return a * 2;
}

int Rect(int width, int height) {
	return width * height;
}

double Circle(int r) {
	return r * r * 3.14;
}

