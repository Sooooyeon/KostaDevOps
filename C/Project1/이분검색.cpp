#include<stdio.h>

void main()
{
	int arr[] = { 2,6,13,19,21,23,29,35,48,62,89,90,95,99,102,109,208,629 };

	int key = 29;

	int size = sizeof(arr) / sizeof(arr[0]);

	int upper, lower, middle;

	lower = 0;
	upper = size - 1;



	for (;;) 
	{
		middle = (lower + upper) / 2;

		if (arr[middle] > key) {
			upper = middle -1;
		}
		else {
			lower = middle + 1;

		}
	}


}