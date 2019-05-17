#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{

	int j, i, k, key;
	int a[10];
	j = -1;

	do {
		j++;
		scanf("%d", &a[j]);
	} while (j<9);


	for (int i = 1; i <= 9; ++i) {
		key = a[i];

		for (int k = i - 1; k >= 0; k--) 
		{
			if (a[k] > key) 
				a[k + 1] = a[k];
			
			else
				break;
		}
			a[k + 1] = key;
		
		
	}
	for (int x = 0; x < 10; x++) {
		printf("%5d ", a[x]);
	}


}