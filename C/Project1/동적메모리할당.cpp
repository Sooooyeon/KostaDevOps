#include<stdio.h>
#include<stdlib.h>

void main() {
	int num;
	int* student;
	int total = 0;

	printf("�л����� �Է��ϼ���:");
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num);
	// 40����Ʈ ��ŭ Ÿ��ĳ����

	if (student == NULL) {
		printf("�޸𸮰� �����Ͽ� �޸𸮸� �Ҵ��� �� �����ϴ�.\n");
		return;
	}
	printf("�Ҵ�� �޸��� ũ��� %d �Դϴ�.\n", sizeof(int) * num);



	for (int i = 0; i < num; i++) {
		printf("%d ��° �л��� ���� �Է�:", i + 1);
		scanf_s("%d", &student[i]);
	}

	for (int i = 0; i < num; i++) {
		total += student[i];
	}

	printf("���� : %d, ��� : %d �Դϴ�.\n", total , total/num);

	free(student);
}