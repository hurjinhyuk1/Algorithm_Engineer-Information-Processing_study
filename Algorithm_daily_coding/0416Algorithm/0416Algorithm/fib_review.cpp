#pragma warning(disable 4996)

#include <stdio.h>
int N;
int fib(int x)
{
	if (x == 1)return 1;
	if (x == 2)return 1;

	return fib(x - 2)+fib(x - 1);
}


int main(void)

{

	scanf("%d", &N);

	printf("%d\n", fib(N));


	return 0;
}