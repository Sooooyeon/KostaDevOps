#include<stdio.h>

// �������� ù��°�� �����ϸ� �������� 1�� ����
// �������� ����ϸ� �������� ��������. ����, �� ���� ��Ÿ�� �� ����.

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
	printf("������ �����ϼ��� : ");
	scanf_s("%d", &day);

	switch (day) {
	case sun:
		printf("�Ͽ��Ͽ� ¥�İ�Ƽ\n");
		break;
	case mon:
		printf("�����Ͽ� �δ��\n");
		break;
	case tue:
		printf("ȭ���Ͽ� ����\n");
		break;
	case wed:
		printf("�����Ͽ� �ܹ���\n");
		break;
	case thu:
		printf("����Ͽ� ��ġ�\n");
		break;
	case fri:
		printf("�ݿ��Ͽ� ������\n");
		break;
	case sat:
		printf("����Ͽ� ġŲ\n");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

}