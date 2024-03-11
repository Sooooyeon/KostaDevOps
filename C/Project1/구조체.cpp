#include<stdio.h>


// 구조체는 사용자가 정의한 새로운 자료형
	
struct student {
	// 멤버변수
	char name[10];
	int age;
	int height;
}st1, st2;
// student는 사용자인 내가 정의한 새로운 자료형
// 구조체 뒤에서 변수 선언해서 사용이 가능함.


void main() {
	/*student a;
	a.age = 10;*/

	st1.age = 12;
}