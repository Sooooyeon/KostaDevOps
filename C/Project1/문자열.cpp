#include<stdio.h>

void main() {
	char str[] = "Hello World";
	printf("문자열 변경전\n");
	printf("%s\n", str);

	str[0] = 'K';
	str[1] = 'o';
	str[2] = 'r';
	str[3] = 'e';
	str[4] = 'a';

	printf("문자열 변경후\n");
	printf("%s\n", str);

	int i = 0;
	char str1[100] = "Beautiful";
	// 문자열에서는 마지막에 null이 있다. 
	// null이 마침표역할을하며 이후의 쓰레기 값이 보이지 않게 만든다.

	printf("%s\n", str1);

	char str2[] = "Hello\0World";
	printf("%s\n", str2);

	str[3] = '\0';
	printf("%s\n", str2);
}