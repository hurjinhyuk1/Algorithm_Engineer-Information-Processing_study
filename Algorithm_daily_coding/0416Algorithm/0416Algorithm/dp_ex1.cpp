#include <stdio.h>
#pragma warnind(disable 4996)
//다이나믹 프로그래밍
//점화식을 세운다.
//BOJ11726
//규칙성으로 점화식을 .

int a[1001];
int N;
int dp(int x) {
	if (x == 1)return 1;
	if (x == 2) return 2;
	if (a[x] != 0) return a[x];

	return (a[x] = dp(x - 1) + dp(x - 2))%10007;
}


int main(void)
{

	scanf("%d", &N);
	printf("%d", dp(N));

	return 0;

}