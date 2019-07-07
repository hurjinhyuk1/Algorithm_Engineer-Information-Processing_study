#include <stdio.h>

int n;

int f(int n){
	int cnt=1;
	
	for(int i=2; i<=n; ++i){
		if(n%i==0)cnt++;
	}
	
	return cnt;
}


// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
