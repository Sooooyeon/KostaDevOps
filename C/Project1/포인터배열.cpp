#include<stdio.h>

void main() {
	//int arr[] = { 1,2,3,4,5 };

	//printf("배열의 요소 출력:\n");
	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n",arr[i]);
	//	printf("%d\n", *(arr + i));

	//}
	//printf("%d\n", arr);
	//printf("%x\n", arr);
	//// x는 16진수로 출력을 의미

	//printf("%d\n", *(arr + 1));
	//// *(arr + 1) == 2



	//// 배열의 이름 == 포인터이므로 포인터를 배열의 이름으로 이용할 수 있다.

	int arr[] = { 1,2,3,4,5 };
	
	// 포인트 변수 - 주소값을 저장하는 변수
	int* pTemp;

	// 배열 arr의 주소값을 저장
	pTemp = &arr[0];
	pTemp = arr;

	printf("배열의 요소 출력:");
	printf("%d\n", pTemp); // 배열의 시작 주소

	// pTemp[0]- 배열의 첫번째 값을 의미하게됨
	printf("%d\n", pTemp[0]);
	printf("%d\n", pTemp[1]);
	printf("%d\n", pTemp[2]);
	printf("%d\n", pTemp[3]);
	printf("%d\n", pTemp[4]);

	for (int i = 0; i < 5; i++)
	{
		printf("%d", pTemp[i]);
	}




 

}