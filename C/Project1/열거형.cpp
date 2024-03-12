#include<stdio.h>

// 열거형의 첫번째를 지정하면 나머지는 1씩 증가
// 열거형을 사용하면 가독성이 좋아진다. 요일, 월 등을 나타낼 때 좋다.

enum Week {
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};


void main() {
	int day;
	printf("요일을 선택하세요 : ");
	scanf_s("%d", &day);

	switch (day) {
	case sun:
		printf("일요일엔 짜파게티\n");
		break;
	case mon:
		printf("월요일엔 부대찌개\n");
		break;
	case tue:
		printf("화요일엔 피자\n");
		break;
	case wed:
		printf("수요일엔 햄버거\n");
		break;
	case thu:
		printf("목요일엔 김치찌개\n");
		break;
	case fri:
		printf("금요일엔 마라탕\n");
		break;
	case sat:
		printf("토요일엔 치킨\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
	}

}