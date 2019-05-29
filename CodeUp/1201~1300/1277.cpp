#pragma warning(disable:4996)
#include <cstdio>

int main(void)
{
	int n;
	
	int T = 3;
	scanf("%d", &n);
	int arr[100000] = { 0 };
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &arr[i]);
	}

	while (T--) {
		if (T == 2) {
			printf("%d ", arr[1]);
		}
		else if (T == 1) {
			printf("%d ", arr[n / 2 + 1]);
		}
		else {
			printf("%d ", arr[n]);
		}
	}

	return 0;
}
