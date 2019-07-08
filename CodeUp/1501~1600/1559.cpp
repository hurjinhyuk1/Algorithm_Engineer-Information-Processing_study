#include <stdio.h>

int n, m;
// 이 부분에 들어가야 될 코드를 작성하여 제출
long long int f (long long int a, long long int b){
	return a+b;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
