#include <stdio.h>

int n;

void f(int n){
	if(n==0)printf("false");
	else printf("true");
}
// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
