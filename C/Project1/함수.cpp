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
	printf("���� ������� %d�Դϴ�.\n", result);
}

int main(){
	//int i = 5;
	//int j = 3;
	//int addNum = Add(i, j);
	//// call by value ���� - a, b�� �����

	//print_Hap(addNum);

	//int mulTwo = Mul(3);
	//printf("���� ������� %d�Դϴ�.\n", mulTwo);


	//int width = 0;
	//int height = 0;
	//printf("������ ���̿� ������ ���̸� �Է����ּ���.");
	//scanf_s("%d%d", &width, &height);

	//int rect = Rect(width, height);
	//printf("�簢���� ���̴� %d�Դϴ�.\n", rect);


	//int r = 0;
	//printf("���� �������� �Է����ּ���.");
	//scanf_s("%d", &r);

	//double circle = Circle(r);
	//printf("���� ���̴� %.2f�Դϴ�.", circle);


	int a = 0;
	int b = 0;

	printf("�� ������ �Է��ϼ���: ");
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
	printf("�� ���� �� : %d\n", a + b);
}

void Minus(int a, int b) {
	printf("�� ���� �� : %d\n", a - b);
}

void Multiple(int a, int b) {
	printf("�� ���� �� : %d\n", a * b);
}

void Divide(int a, int b) {
	printf("�� ���� ������ : %d\n", a / b);
}

void CompareNum(int a, int b) {
	if (a > b) {
		printf("�ִ밪 : %d\n", a);
		printf("�ּҰ� : %d\n", b);
	}
	else if (a < b){
		printf("�ִ밪 : %d\n", b);
		printf("�ּҰ� : %d\n", a);
	}
	else if ( a == b ) {
		printf("�� ���� �����ϴ�.\n");
	}
	else {
		printf("�Է��� ���ڰ� �ùٸ��� �ʽ��ϴ�.\n");
	}
}

void Max(int a, int b) {
	if (a > b) {
		printf("�ִ밪 : %d\n", a);
	}
	else if (a < b) {
		printf("�ִ밪 : %d\n", b);
	}
	else if (a == b) {
		printf("�� ���� �����ϴ�.\n");
	}
	else {
		printf("�Է��� ���ڰ� �ùٸ��� �ʽ��ϴ�.\n");
	}
}

void Min(int a, int b) {
	if (a > b) {
		printf("�ּҰ� : %d\n", b);
	}
	else if (a < b) {
		printf("�ּҰ� : %d\n", a);
	}
	else if (a == b) {
		printf("�� ���� �����ϴ�.\n");
	}
	else {
		printf("�Է��� ���ڰ� �ùٸ��� �ʽ��ϴ�.\n");
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

