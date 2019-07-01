#include <stdio.h>

long long int n;

long long int abs(long long int n)
{
	if(n<0)return -1*n;
	else return n;
}
// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
