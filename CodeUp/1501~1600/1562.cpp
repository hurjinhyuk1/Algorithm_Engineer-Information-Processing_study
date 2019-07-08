#include <stdio.h>

int n, m;
// 이 부분에 들어가야 될 코드를 작성하여 제출
int min (int n,int m)
{
	return n<=m ? n:m;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}
