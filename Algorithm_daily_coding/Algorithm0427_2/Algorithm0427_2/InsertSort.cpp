#include <stdio.h>



int main(void)
{
	int arr[] = { 4,2,7,1,9,3 };
	int temp;
	int temp2;
	int index;
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		index = i;
		for (int j = i - 1; j >= 0; --j) {
			if (arr[index] < arr[j]){
				temp = arr[index];
				arr[index] = arr[j];
				arr[j] = temp;
				temp2 = j;
				j = index;
				index = temp2;
				//4, 2, 7, 1, 9, 3
			}
		}
	}

	return 0;
}
// i=0, j=-1,  4
// i=1, j=0  2 4 // 4,2,7,1,9,37 1 9 3 
//i=2  j=1
//i=3 j=2   2 4 1 7 9 3    i=3, j=1

// 4,2,7,1,9,3