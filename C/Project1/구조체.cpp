#include<stdio.h>
#include<string.h>


// ����ü�� ����ڰ� ������ ���ο� �ڷ���
// ����ü�� ������������ ���� �����ϸ� 4byte�� �޸𸮸� ����
	
struct student {
	// �������
	char name[10];
	int age;
	int height;
}st1, st2, * pB, st3 = {"ari",1,30};
// student�� ������� ���� ������ ���ο� �ڷ���
// ����ü �ڿ��� ���� �����ؼ� ����� ������.
// ����ü ����� ���ÿ� �ʱ�ȭ ����


void main() {
	/*student a;
	a.age = 10;*/

	st1.age = 25;
	st1.height = 160;
	// st1.name = "soo"; //���� �߻�
	// �迭�� �̸��� �ּ� ��, ����̱� ������ ������ �� ����
	strcpy_s(st1.name,"soo");
	printf("�̸� : %s, ���� : %d, Ű : %d\n",st1.name, st1.age, st1.height);

	student* pA;

	pB = &st1;
	pB->age = 30; 
	// �����ͺ������� ����ü ��� ���� �� �������� �������� ȭ��ǥ�� ����Ѵ�.
	pB->height = 180;

	printf("�̸� : %s, ���� : %d, Ű : %d\n", st3.name, st3.age, st3.height);
	

}