#include<stdio.h>
#include<string.h>

void Swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a= *b;
	*b = temp;
}

void BubbleSort(char* str, int arrLength) {
	for (int i = arrLength; i > 0; i--) {
		for (int j = 1; j < arrLength - 1; j++) {

			if (str[j - 1] > str[j])
			{
				Swap(&str[j - 1], &str[j]);
			}
		}
	}
	printf("정렬된 문자열 %s\n", str);
}

// 선택정렬
void SelectedSort(char* arr, int arrLength) {
	int minidx = 0;
	int minidx2 =0;

	for (int i = 0; i < arrLength - 1; i++) {

		minidx = 1;

		for (int j =i+ 1; j < arrLength; j++) {

			if (arr[minidx] > arr[j])
			{
				//Swap(&arr[j - 1], &arr[j]);
				minidx = j;
			}
		}
		if (minidx != i) {
			Swap(&arr[minidx], &arr[i]);
		}
	}
	printf("정렬된 문자열 %s\n", arr);
}


void main() 
{
	char str[] = "javascript";

	printf("정렬 전의 문자열 %s\n", str);
	int num = strlen(str);
	BubbleSort(str, num);
	SelectedSort(str,num);
}