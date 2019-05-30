#pragma warning (disable:4996)

#include <cstdio>
int main(void)
{
	int n, i = 1, j = 1;
	scanf("%d", &n);

	while (1) {
		if (j == n*9+1)break;
		if (j <= n*i) {
			printf("*");
			j++;
			continue;
		}
		j = 1;
		i++;
		printf("\n");

	}
	printf("\n");

}
