#include <stdio.h>

int n;

int zero(int n)
{
	if(n==0)return 1;
	else return 0;
}

int plus(int n)
{
	if(n>0) return 1;
	else return 0;
}


// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("%s", plus(n)?"plus":"minus");
  return 0;
}
