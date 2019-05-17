#pragma warning(disable: 4996)
#include <stdio.h>


int fib(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;

	return fib(x - 1) + fib(x - 2);
}

//1 1 2 3 5 8 13 21 34...
int main(void)
{
	printf("%d\n", fib(5));




	return 0;
}