#include <iostream>
#include <cstdio>

int main(void)
{
	int arr[] = { 9,1,8,4,5,3,6 };
	int temp;
	int index;
	int min;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		min = arr[i];
		for (int j = i+1; j < sizeof(arr) / sizeof(int); j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp=arr[index];
		arr[index] = arr[i];
		arr[i] = temp;		 
		
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}


//1 8 4 5 3 6
