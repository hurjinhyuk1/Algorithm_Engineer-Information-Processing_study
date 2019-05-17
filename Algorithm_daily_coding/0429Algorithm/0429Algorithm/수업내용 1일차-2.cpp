#include <stdio.h>

int main(void)
{
	
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%3d X %3d= %3d\n", i, j, i*j);
		}
		printf("\n");
	}

	for (int i = 2; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			printf("%3d X %3d = %3d", i, j, i*j);
		}
		printf("\n");
	}


	

	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%3d X %3d = %3d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}