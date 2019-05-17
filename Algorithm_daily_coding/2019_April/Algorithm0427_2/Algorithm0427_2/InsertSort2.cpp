#include <stdio.h>


#define MAX_LEN 5


void InsertionSort(int arr[])
{
	
}
int main(void)
{
	int arr[MAX_LEN] = { 9,5,3,7,1 };
	int i, j, key;

	for (i = 1; i < MAX_LEN; i++) {
		key = arr[i];

		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > key) {
				arr[j + 1] = arr[j];

			}
			else {
				break;
			}
		}
		arr[j + 1] = key;
	}

}