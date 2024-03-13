#include<stdio.h>
#include<stdlib.h>

void main() {
	int num;
	int* student;
	int total = 0;

	printf("학생수를 입력하세요:");
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num);
	// 40바이트 만큼 타입캐스팅

	if (student == NULL) {
		printf("메모리가 부족하여 메모리를 할당할 수 없습니다.\n");
		return;
	}
	printf("할당된 메모리의 크기는 %d 입니다.\n", sizeof(int) * num);



	for (int i = 0; i < num; i++) {
		printf("%d 번째 학생의 성적 입력:", i + 1);
		scanf_s("%d", &student[i]);
	}

	for (int i = 0; i < num; i++) {
		total += student[i];
	}

	printf("총점 : %d, 평균 : %d 입니다.\n", total , total/num);

	free(student);
}