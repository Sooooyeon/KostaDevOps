#include<stdio.h>

void main(){
	// ��Ÿ�ӽ� �迭�� ���̰� ���ϸ� ������ �߻��� �� �ִ�.
	// ���� �迭�� ���̴� ������ ��� ����

	int array[3];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;

	printf("�迭 ����� ���: %d, %d, %d\n", array[0], array[1], array[2]);




	/*int array2[5];*/
	// int array2[5] = { 1,2,3,4,5 };
	int array2[] = { 1,2,3,4,5 };

	double total = 0;

	//for (int i = 0; i < 5; i++) {
	//	printf("������ �Է��ϼ���: ");
	//	scanf_s("%d", &array2[i]);
	//}

	for (int i = 0; i < 5; i++) {
		total = total + array2[i];
	}

	double avg = total / 5;

	printf("�迭 ����� ���: %d, %d, %d, %d, %d\n", array2[0], array2[1], array2[2], array2[3], array2[4]);
	printf("�迭 ����� ��: %.0f\n�迭 ����� ���: %.2f\n", total, avg);



	int array3[5] = { 1,2 };
	printf("�迭 ����� ���: %d, %d, %d, %d, %d\n", array3[0], array3[1], array3[2], array3[3], array3[4]);



	// �迭�� ���(�ּҰ�)�̱⶧���� ���� �����ڸ� ���� ���� �Ѱܹ��� �� ����.
	// ù��° �ε����� �ּҰ� �迭�� �ּ��̴�.
	// �迭�� ��ҳ��� �����ؾ� �Ѵ�.

	int array4[5] = { 1,2,3,4,5 };
	int array5[5];
	for (int i = 0; i < sizeof(array4)/ sizeof(array4[0]); i++) {
		 /* ������ sizeof�� ����� �ش� ����� ũ�⸦ �� �� �ִ�. 
		 �迭�� ��� ������ ������ŭ �ݺ��ϱ� ����
		 �迭 ��ü�� ����� �迭�� ù��° �ε����� ���̽��� �������� ����Ѵ�. */
		array5[i] = array4[i];
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", array5[i]);
	}	
}