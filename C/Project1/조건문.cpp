#include<stdio.h>

// BSD ��� - main �Լ� �߰�ȣ ���۽� ����
// K&R ��� (�Ʒ��� ���� ���- ����X)
void main() {

	int a = 5;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("a�� 0���� Ů�ϴ�.\n");
	} else if (a < 0) {
		printf("a�� 0���� �۽��ϴ�.\n");
	} else {
		printf("a�� 0�Դϴ�.\n");
	}


}