#pragma warning(disable 4496)
#include <stdio.h>

#define MAX_SIZE 3
int arr[MAX_SIZE][MAX_SIZE];
int y, x; // y 행 , x열
int sum_number[100];
void rotate(int **arr) {
	printf("rotate 함수입니다.\n");
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}
void sum(int **arr)
{
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			sum_number[i] += arr[i][j];
		}

	}

	for (int i = 0; i < y; i++) {
		printf("%d번째 행의합:%d\n", i + 1, sum_number[i]);

	}



}
int main(void)
{
	int **arr;
	scanf("%d %d", &y, &x);
	arr = new int*[x]; // 1차원 배열의 개수

	for (int i = 0; i < y; ++i) {
		arr[i] = new int[x];
	}

	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			arr[i][j] = 10 * i + j;

		}
	}

	//int row = sizeof(arr) / sizeof(arr[0]);
	//int col = sizeof(arr[0]) / sizeof(int);
	rotate(arr);
	sum(arr);
	for (int i = 0; i < y; ++i) {
		delete[]arr[i];
	}
	delete[]arr;

}
