#pragma warning (disable:4996)
#include <cstdio>

int main(void)
{
	int a[101][101];
	int n;
	int cnt = 1;
	int sum = 0;
	int flag = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			a[i][j] = cnt++;
		}
	}
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (flag == 1) {
				if (j == n)flag++;
				sum += a[1][j];
			}
			else if (flag == 2) {
				if (j == n) {
					flag++;
					break;
				}
				sum += a[j + 1][n];
			}
			else if (flag == 3) {
				if (j == n) {
					flag++;
					break;
				}
				sum += a[n][n- j];
			}

			else if (flag == 4) {
				if (j == n) {
					flag++;
					break;
				}
				sum += a[n - j][1];
			}

		}
	}
	printf("%d", sum-1);
	return 0;
}




/*
123
456
789

00 01 02.. 0n
1n
2n
3n..

0n-1		   nn
0n		n-2 nn-1n
*/
