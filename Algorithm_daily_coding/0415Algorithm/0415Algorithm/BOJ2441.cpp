#pragma warning (disable 4996)
#include <stdio.h>


int N;

int main(void)

{
	scanf("%d", &N);

	for (int i = 1; i <=N; ++i) {
		for (int j = 1; j < i; ++j) {
			printf(" ");
		}
		for (int k = N ; k>=i; k--) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}