#pragma warning(disable:4996)
#include<stdio.h>
int i, j;
int n = 0;
int result = 0;
int main() {
	scanf("%d", &i);
	
	while (1) {
		if (i == 1) {
			result = 1;
			break;
		}
		if (i > 3 * n*(n - 1) + 1)
		{
			result++;
			n++;
			continue;
		}
			
			break;
	}
	printf("%d\n", result);


	return 0;
}