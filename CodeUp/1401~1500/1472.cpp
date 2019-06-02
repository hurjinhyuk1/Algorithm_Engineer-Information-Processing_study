#pragma warning(disable: 4996)
#include <cstdio>


int main(void)
{
	int a[101][101] = { 0, };
	int b[101][101] = { 0, };
	int n, m;
	int cnt = 1;
	scanf("%d %d", &n, &m);

	for (int i = 0; i <n; ++i) {
		for (int j = 0; j<m; ++j) {
			a[i][j] = cnt++;
		}
	}







	for (int i = 0; i <n; ++i) {
		for (int j = 0; j<m; ++j) {

			if (i % 2 == 0)b[n - 1 - i][m - 1 - j] = a[i][j];
			else  {
				b[n - 1 - i][j] = a[i][j];
			}
		}
	}





	for (int i = 0; i <n; ++i) {
		for (int j = 0; j<m; ++j) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	return 0;

}



