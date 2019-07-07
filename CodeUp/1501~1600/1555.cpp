#include <stdio.h>

int n;

long long int f(int n){
	
	long long int result=0;
	
	for(int i=1; i<=n; ++i){
		result+=i;
	}
	
	return result;
}


// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
