#include<stdio.h>
#include<string.h>


// 구조체는 사용자가 정의한 새로운 자료형
// 구조체는 포인터형으로 선언 가능하며 4byte의 메모리를 가짐
	
struct student {
	// 멤버변수
	char name[10];
	int age;
	int height;
}st1, st2, * pB, st3 = {"ari",1,30};
// student는 사용자인 내가 정의한 새로운 자료형
// 구조체 뒤에서 변수 선언해서 사용이 가능함.
// 구조체 선언과 동시에 초기화 가능


void main() {
	/*student a;
	a.age = 10;*/

	st1.age = 25;
	st1.height = 160;
	// st1.name = "soo"; //오류 발생
	// 배열의 이름은 주소 즉, 상수이기 때문에 대입할 수 없음
	strcpy_s(st1.name,"soo");
	printf("이름 : %s, 나이 : %d, 키 : %d\n",st1.name, st1.age, st1.height);

	student* pA;

	pB = &st1;
	pB->age = 30; 
	// 포인터변수에서 구조체 멤버 참조 시 간접참조 연산자인 화살표를 사용한다.
	pB->height = 180;

	printf("이름 : %s, 나이 : %d, 키 : %d\n", st3.name, st3.age, st3.height);
	

}