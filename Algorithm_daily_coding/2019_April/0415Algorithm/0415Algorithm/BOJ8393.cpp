#pragma warning(disable 4996)
#include <stdio.h>


int N;
int sum;
int main(void)
{

	scanf("%d", &N);


	for(int i=1; i<=N; ++i){
		sum += i;
	}

	printf("%d\n", sum);


	return 0;
}