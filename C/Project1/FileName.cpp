

// ��Ŭ�� - �߰� - �� �׸�
/* 
 #�� ������ ��ó���⸦ ��Ÿ����.
.h�� �پ� �ִ� ������ ��� �����̶�� �θ���.
 stdio.h�� �������� ������ printf �Լ��� ����� �� ����.
 stdio ��� ���� �ȿ� ǥ�� ����� �Լ��� �ִ�.
 return 0�� �Լ��� ���Ḧ �ǹ�
*/
#include<stdio.h>

int main() {
	/*
	printf("Hello World\n");
	printf("�����\n");
	printf("��⵵ �����ν� ���ɵ�\n");
	printf("010-1234-5678\n");
	printf("�����\n��⵵ �����ν� ���ɵ�\n010-1234-5678\n");
	*/

	// ���� �ϰ� ���� �������� �ʴ� ��� 
	// �� �޸𸮿��� ������ ���� ����. 
	// ���� ����� ���ÿ� �ʱ�ȭ �ϴ� ���� ����.


	// ������ ���
	/*
	int value;
	int num = 5;
	value = 100;
	printf("%d\n %d\n", value, num);
	*/
	// ���ڸ� ����Ҷ��� ���Ĺ��ڸ� ����Ѵ�.
	// d�� decimal��10���� ������ ���ڸ� ������� �ǹ��Ѵ�.
	// �Ǽ��� ����Ҷ��� f�� ����Ѵ�.


	// ������ ���
	int value = 100;
	char ch = 'C';

	printf("��°��: ���� %d, ���� %c\n", value, ch);


	// ���ڿ� ���� ���
	int age = 18;
	char grade = 'A';

	printf("�̸�: �����\n����: %d\n����: %c\n", age, grade);


	// �簢�� ���� ���ϱ�
	int width = 10;
	int height = 20;

	printf("�簢���� ����: %d\n", width * height);


	// ���� ���� ���ϱ�
	double area = 0.0;
	int radius = 5;

	area = radius* radius * 3.14;

	printf("���� ����: %f\n", area);


	// ������ 10������ ����ϱ�
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = '1';

	printf("%c %c %c\n", ch1, ch2, ch3);
	printf("%d %d %d\n", ch1, ch2, ch3);

	printf("'A'�� �ƽ�Ű �ڵ�ǥ�� %d\n'B'�� �ƽ�Ű �ڵ�ǥ�� %d\n'1'�� �ƽ�Ű �ڵ�ǥ�� %d\n", ch1, ch2, ch3);


	// ����ڷκ��� ������ �Է� scanf
	int input1 = 0;
	int input2 = 0;

	printf("������ �Է��ϼ���:");
	scanf_s("%d%d", &input1, &input2);
	// �Է¹������� �޸� �ּҸ� �˷�����Ѵ�.
	// �������� ���� �Է¹������� �����̽��� Ȥ�� ���ͷ� ����

	//printf("������ �Է��ϼ���:");
	//scanf_s("%d", &input2);

	printf("�� ���� ��:%d\n", input1+input2);

	return 0;
}




