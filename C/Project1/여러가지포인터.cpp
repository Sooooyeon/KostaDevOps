#include<stdio.h>
#include<string.h>

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}


void main() {


	//// void�� �����ʹ� �޸� �ּҰ��� �����ϱ� ���� ��������
	//// ������ ������ ������ 4����Ʈ �޸𸮰� �Ҵ�.
	//// void�� �����͵� 4����Ʈ �Ҵ� 
	//// ���� ������ ������ ���� ������ �� ������, �ּҰ��� ���� ����.

	//void* a;
	//int b = 1234;

	//a = &b;

	//printf("%d\n", a);
	//printf("%d\n", *(int*)a);







	//// �Լ������� -> �Լ��� ��� ������ ����
	//// ���� Int(*func)(int a)
	//// �ڷ��� + �Լ������� + ���������� ����,
	//// �������ڿ� �°� �ڷ��� ǥ��

	//int x, y;
	//int(*fPtr)(int a, int b);

	//printf("�� ������ �Է��ϼ���:");
	//scanf_s("%d%d", &x, &y);

	//// ��Ÿ�ӽ� �Լ������Ϳ� ����� ���� �Լ��� �����Ҵ�� 
	//// ���� �Լ��� �ǵ��� �����鼭 �Լ������ͷ� Ȯ���� ����
	//// (�����Լ� �������� �ٽ� ���� �ʾƵ� �Ǵ� ������ ����)
	//fPtr = Plus;
	//// int res = Plus(x, y);
	//int res = fPtr(x, y);
	//printf("��� = %d", res);

	//fPtr = Minus;
	//res = fPtr(x, y);
	//printf("��� = %d", res);








	// NULL ������
	// NULL ������ üũ�� �ݵ��������Ѵ�.(����ó��)
	char str[] = "Love";
	char* p;

	// ���ϴ� ���ڸ� ã�� �޼���
	p = strchr(str, 'v');

	if (p != NULL) {
		*p = 'b';
		printf("������: %s\n", str);
	}
	else {
		printf("NULL�� �����Ͽ����ϴ�.\n");
	}


}
