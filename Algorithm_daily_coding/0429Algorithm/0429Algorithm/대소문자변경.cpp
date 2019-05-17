#include <stdio.h>
#include <string>
int main(void)
{

	char arr[] = { 'a','b','c','d','e' };
	char smallAlpa[26];
	int test[26];
	//memset(smallAlpa, 0, sizeof(smallAlpa)-1);
	memset(test, 0, sizeof(test));
	memset(arr, 0, sizeof(arr));
	char a = 'A';
	for (int i = 0; i<26; ++i) {
		smallAlpa[i] = a + i;
		printf("%5c", a + i);
	}

	printf("\n");

	for (int i = 0; i<26; ++i) {
		printf("%5c", smallAlpa[i] + 32);
	}
	printf("\n");



	return 0;
}