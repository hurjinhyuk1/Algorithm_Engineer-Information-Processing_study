#pragma warning (disable :4996)
#include <cstdio>
int main(void)
{
	int a[3];
	int temp;
	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	for (int i = 0; i<3; ++i) {
		for (int j = 0; j<2 - i; j++) {
			if (a[j]>a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}
		}
	}
	for (int i = 0; i<3; ++i) {
		printf("%d ", a[i]);
	}
	return 0;
}


