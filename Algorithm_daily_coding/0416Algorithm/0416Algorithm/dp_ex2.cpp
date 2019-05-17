#include <stdio.h>
#include <algorithm>
int pi[] = {
	0,1,5,8,9,10,17,17,20,24,30
}; // pi의 각각 인덱스의 의미는 각 길이당 가격
using namespace std;
int r[1] = { 0,};
int curRod(int *pi, int n) {
	int q;

	int result;
	for (int j = 1; j <= n; ++j) {
		q = -1;
		for (int i = 1; i <= j; ++i) {
			result = pi[i] + r[j - i];
			q = max(q, result);
		}
	}

	return r[n];
}



int main(void)
{

	printf("%d", curRod(pi, 2));


	return 0;
}