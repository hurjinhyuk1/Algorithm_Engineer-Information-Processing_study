#pragma warning (disable:4996)
#include <stdio.h>


//0 -> 가로 1-> 세로 
int main(void)
{
	int h, w;
	int n, i, d, x, y;
	scanf("%d %d", &h, &w); // 격자판 크기 입력
	int a[200][200] = {0,};

	scanf("%d", &n);

	for (int z = 0; z<n; ++z) {
		scanf("%d %d %d %d", &i, &d, &x, &y);
		if (d == 0) {
			for (int j = 0; j<i; j++) {
				a[x - 1][y - 1] = 1;
				y++;
			}
		}
		else {
			for (int j = 0; j<i; j++) {
				a[x - 1][y - 1] = 1;
				x++;

			}
		}
	}

	for (int k = 0; k<h; k++) {
		for (int s = 0; s<w; s++) {
			printf("%d ", a[k][s]);
		}
		printf("\n");
	}

	return 0;
}

