#include <stdio.h>

int a[][2] = {
	{1,2},
	{3,4},
	{5,6}
};


void arraymethod(int (*b)[2],int a, int c)
{

	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < c; ++j) {
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
}

int main (void)
{
	int y = sizeof(a) / sizeof(a[1]);
	int x = sizeof a[0] / sizeof(int);

	arraymethod(a, y, x);
	return 0;
}