#pragma warning(disable:4996)

#include <stdio.h>
#include <iostream>
#include <string>


int main(void)
{


	char a;
	a = getchar();
	while (a !=-1) {
		
		putchar(a);
		a = getchar();
	}

	return 0;
}