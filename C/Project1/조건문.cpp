#include<stdio.h>

// BSD 방식 - main 함수 중괄호 시작시 개행
// K&R 방식 (아래와 같은 방식- 개행X)
void main() {

	// if else문
	// 
	//int a = 5;
	//printf("정수를 입력하세요: ");
	//scanf_s("%d", &a);

	//if (a > 5) {
	//	printf("a는 5보다 큽니다.\n");
	//} else if (a < 5) {
	//	printf("a는 5보다 작습니다.\n");
	//} else if (a == 5){
	//	printf("a는 5입니다.\n");
	//} else {
	//	printf("입력값이 올바르지 않습니다. 정수를 입력해주세요.\n");
	//	// a를 5로 인식함 문자를 입력할 경우 자료형이 맞지 않아서 초기값인 5가출력됨
	//}



	// switch-case문
	int shortcut = 0;
	printf("단축키를 입력하세요: ");
	scanf_s("%d", &shortcut);
	
	switch (shortcut) {
		case 1:
			printf("엄마: 010-xxxx-xxxx\n");
			break;
		case 2:
			printf("아빠: 010-xxxx-xxxx\n");
			break;
		case 3:
			printf("친구: 010-xxxx-xxxx\n");
			break;
		default:
			printf("해당 단축키가 없습니다.\n");
			break;
	}


	// 해당 월에력 맞게 출력
	/*int month = 0;
	int num = 0;

	printf("월을 입력하세요:");
	scanf_s("%d", &month);

	if (month == 12 || month == 1 || month == 2) {
		num = 1;
	}
	else if (month == 3 || month == 4 || month == 5) {
		num = 2;
	}
	else if (month == 6 || month == 7 || month == 8) {
		num = 3;
	}
	else if (month == 9 || month == 10 || month == 11) {
		num = 4;
	}

	switch (num) {
	case (1):
		printf("겨울입니다.\n");
		break;
	case (2):
		printf("봄입니다.\n");
		break;
	case (3):
		printf("여름입니다.\n");
		break;
	case (4):
		printf("가을입니다.\n");
		break;
	default:
		printf("해당 월은 존재하지 않습니다.\n");
		break;
	}*/


	// 계절 출력
	int month = 0;
	printf("월을 입력하세요:");
	scanf_s("%d", &month);

	switch (month) {
	case 12:
	case 1:
	case 2:
		printf("겨울입니다.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄입니다.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름입니다.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을입니다.\n");
		break;
	default:
		printf("해당 월은 존재하지 않습니다.\n");
		break;
	}
}