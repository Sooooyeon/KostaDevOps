#include<stdio.h>

// BSD ��� - main �Լ� �߰�ȣ ���۽� ����
// K&R ��� (�Ʒ��� ���� ���- ����X)
void main() {

	// if else��
	// 
	//int a = 5;
	//printf("������ �Է��ϼ���: ");
	//scanf_s("%d", &a);

	//if (a > 5) {
	//	printf("a�� 5���� Ů�ϴ�.\n");
	//} else if (a < 5) {
	//	printf("a�� 5���� �۽��ϴ�.\n");
	//} else if (a == 5){
	//	printf("a�� 5�Դϴ�.\n");
	//} else {
	//	printf("�Է°��� �ùٸ��� �ʽ��ϴ�. ������ �Է����ּ���.\n");
	//	// a�� 5�� �ν��� ���ڸ� �Է��� ��� �ڷ����� ���� �ʾƼ� �ʱⰪ�� 5����µ�
	//}



	// switch-case��
	int shortcut = 0;
	printf("����Ű�� �Է��ϼ���: ");
	scanf_s("%d", &shortcut);
	
	switch (shortcut) {
		case 1:
			printf("����: 010-xxxx-xxxx\n");
			break;
		case 2:
			printf("�ƺ�: 010-xxxx-xxxx\n");
			break;
		case 3:
			printf("ģ��: 010-xxxx-xxxx\n");
			break;
		default:
			printf("�ش� ����Ű�� �����ϴ�.\n");
			break;
	}


	// �ش� ������ �°� ���
	/*int month = 0;
	int num = 0;

	printf("���� �Է��ϼ���:");
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
		printf("�ܿ��Դϴ�.\n");
		break;
	case (2):
		printf("���Դϴ�.\n");
		break;
	case (3):
		printf("�����Դϴ�.\n");
		break;
	case (4):
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�ش� ���� �������� �ʽ��ϴ�.\n");
		break;
	}*/


	// ���� ���
	int month = 0;
	printf("���� �Է��ϼ���:");
	scanf_s("%d", &month);

	switch (month) {
	case 12:
	case 1:
	case 2:
		printf("�ܿ��Դϴ�.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("���Դϴ�.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("�����Դϴ�.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�ش� ���� �������� �ʽ��ϴ�.\n");
		break;
	}
}