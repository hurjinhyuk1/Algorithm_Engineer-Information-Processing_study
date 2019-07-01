#include <stdio.h>

int n;

bool prime(int n)
{
	for(int i=2; i<=n; ++i){
		if(n==i)return 1;
		if(n%i==0)return 0;
	}
}


// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}
