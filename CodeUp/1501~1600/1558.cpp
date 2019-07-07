#pragma warning(disable:4996)
#include <stdio.h>
long long int n;
// 이 부분에 들어가야 될 코드를 작성하여 제출
long long int f(long long int n) {
	long long int changeNumber;
	changeNumber = n;
	int cnt = 0;
	long long ans = 0;
	long long int result = 1;
	while (n != 0) {
		//printf("%d\n",n%10);
		n = n / 10;
		cnt++;
	}
	while (changeNumber != 0) {
		for (int i = cnt - 1; i >= 0; --i) {
			for (int k = 0; k < i; ++k) {
				result = result * 10;
			}

				ans += result*(changeNumber % 10);
				changeNumber = changeNumber / 10;
				result = 1;
			}

		}
	
	return ans;

}
int main()
{
	scanf("%lld", &n);
	printf("%lld\n", f(n));
}
