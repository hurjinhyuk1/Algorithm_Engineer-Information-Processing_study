#pragma warning(disable:4996)
#include <stdio.h>

int **arr;
int number_arr[4];
int n, m;
void rotate(int**arr, int y, int x) {
	printf("rotate함수입니다.\n");
	int count = 0;
	int sum = 0;
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			sum += arr[i][j];
			count++;
		}
	}
	printf("%d %d\n", count, sum);
}

void find_number(int** arr, int y, int x) {
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			if (arr[i][j] == 1) {
				number_arr[1]++;
			}
			else if (arr[i][j] == 2) {
				number_arr[2]++;
			}
			else if (arr[i][j] == 3) {
				number_arr[3]++;
			}


		}
	}
	printf("%d %d %d", number_arr[1], number_arr[2], number_arr[3]);
}
int main(void)
{

	
	
	scanf("%d %d", &n, &m);
	arr = new int*[m]; //가로의 길이가 m인 1차원 배열
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	//printf("%d", sizeof(arr));
	int y_distance = n;
	int x_distance = m;

	printf("%d %d\n", y_distance, x_distance);
	rotate(arr,y_distance,x_distance);
	find_number(arr, y_distance, x_distance);
	return 0;
}
//2차원 배열 동적할당
// int ** arr;
// arr=new *int[x] 로 1차원 배열에서 가로 줄 설정
// for문에서 n 즉 세로 길이 만큼 만들어주면 된다.

//2차원 배열 매개변수 받기 int **arr로 하거나 int(*arr)[x]