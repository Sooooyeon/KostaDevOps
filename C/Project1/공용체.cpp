#include<stdio.h>

// ����ü�� �޸� ������ ����
// ����ū �ڷ����� �޸𸮸� ������ ���

union unTemp {
	char a;
	int b;
	double c;
}un;

void main() {
	printf("%d\n", sizeof(un.a)); // 1
	printf("%d\n", sizeof(un.b)); // 4
	printf("%d\n", sizeof(un.c)); // 8

	un.a = 'A';
	printf("%c\n", un.a);
	un.b = 100;
	printf("%d\n", un.b);
	un.c = 3.14;
	printf("%f\n", un.c);
	printf("%c\n", un.a); // ������ ���� ��µ� (�޸𸮸� �����ϰ� �ֱ� ����)
	// �޸��� �������� 3.14�ε� ���߿� 1����Ʈ�� ����Ϸ��� �ϴ� ��Ȳ


}