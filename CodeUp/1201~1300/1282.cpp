#pragma warning (disable:4996)

#include <cstdio>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{

	int n;
	int k, t;
	int temp;
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i) {
		int x = sqrt(n - i);
		temp=x;
		if (x <temp) {
			k = i+1;
			t = temp;
		}
	}

	printf("%d %d", k, t);

	return 0;
}
