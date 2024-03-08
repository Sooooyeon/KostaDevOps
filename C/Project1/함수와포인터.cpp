#include<stdio.h>

int func(int* pArr, int size) {
	// 주소값을 받아야하기때문에 *이 붙어야함

	/*	printf("pArr: %x\n", pArr);
	printf("pArr[0]:%x\n", *pArr);
	printf("pArr[1]:%x\n", *(pArr+1));
	printf("pArr[1]:%x\n", *(pArr) + 1);

	printf("pArr[0]: %x\n", pArr[0]);
	printf("pArr[1]: %x\n", pArr[1]);
	printf("pArr[2]: %x\n", pArr[2]);
	printf("pArr[3]: %x\n", pArr[3]);*/

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + *(pArr + i);
	}


	return sum;
}

void main() {
	int arr[] = { 1,2,3,4,5 };
	int* pArr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	// 함수 호출 시 배열의 이름을 넣으면 배열을 참조하겠다는 의미
	// 배열의 시작 주소를 넘기게 된다.
	// 배열의 사이즈가 필요하다면 배열의 사이즈도 함께 넘겨줘야한다.
	int sumArr = func(arr, size);
	printf("누적합: %d\n", sumArr);

	// printf("arr: %x\n", arr);

}