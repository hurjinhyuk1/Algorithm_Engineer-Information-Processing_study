#include <stdio.h>

long long int n;

int sqrt(long long int n)
{
	
	return n/(n/2);
}
// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
