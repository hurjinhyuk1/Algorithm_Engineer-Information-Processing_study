#include <stdio.h>

int n, m;
// 이 부분에 들어가야 될 코드를 작성하여 제출
int max(int n,int m)
{
	return m>=n? m:n;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}
