#pragma warning(disable 4996)

#include <stdio.h>


int main(void)
{
	int y, x;
	scanf("%d %d", &y, &x);

	int **arr;
	arr = new int*[x];  //1차원 배열의 개수
	for (int i = 0; i < y; ++i) {
		arr[i] = new int[x];
	}

	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			arr[i][j] = i*x + j*y;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < y; i++)
		delete[] arr[i];
	delete[] arr;

	return 0;

}


