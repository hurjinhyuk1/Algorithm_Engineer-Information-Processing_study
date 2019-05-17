#pragma warning(disable 4996)
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	char a[101];

	for (int i = 0; i < 3; ++i) {
		cin.getline(a, 100);
		printf("%s\n", a);
	}
	
	return 0;
}