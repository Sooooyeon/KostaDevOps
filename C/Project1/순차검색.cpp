#include<stdio.h>

int LinearSerach(int *arr, int size, int key) {
	for (int i = 0; i < size; i++) {
		if (key == arr[i]) {
			return key;
		}
	}
	return -1;
}

void main() 
{

	int arr[] = { 6, 4, 2, 3, 7, 8, 5, 9, 10, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	// 검색 
	// scanf를 통해서 입력받은 수의 위치 찾기
	int key = 0;
	scanf_s("%d", &key);

	/*for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (key == arr[i]) {
			printf("검색 되었습니다\n");
			return;
		}
	}*/

	// printf("검색이 종료되었습니다.\n");


	// 배열의 이름은 주소
	int res = LinearSerach(arr, size, key);

	if (res != -1) {
		printf("검색 되었습니다.\n");
		return;
	}
	printf("검색 되지 않았습니다.\n");
}


