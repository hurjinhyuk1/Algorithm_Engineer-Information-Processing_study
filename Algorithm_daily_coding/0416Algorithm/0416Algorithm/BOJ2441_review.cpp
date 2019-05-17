#pragma warning(disable 4996)
#include <stdio.h>

int N;


int main(void)


{

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <i; j++) {
			printf(" ");
		}
		for (int k = N-1; k >= i; k--) {
			printf("*");
		}

		printf("\n");
	}



}