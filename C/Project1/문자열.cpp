#include<stdio.h>

void main() {
	char str[] = "Hello World";
	printf("���ڿ� ������\n");
	printf("%s\n", str);

	str[0] = 'K';
	str[1] = 'o';
	str[2] = 'r';
	str[3] = 'e';
	str[4] = 'a';

	printf("���ڿ� ������\n");
	printf("%s\n", str);

	int i = 0;
	char str1[100] = "Beautiful";
	// ���ڿ������� �������� null�� �ִ�. 
	// null�� ��ħǥ�������ϸ� ������ ������ ���� ������ �ʰ� �����.

	printf("%s\n", str1);

	char str2[] = "Hello\0World";
	printf("%s\n", str2);

	str[3] = '\0';
	printf("%s\n", str2);
}