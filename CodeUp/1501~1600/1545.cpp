#include <stdio.h>

int n;

bool zero (int n)
{
	if(n==0)return true;
	else return false;
}


// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}
