#include <stdio.h>

int n;

void f(int n){
	if(n%2==0){
		printf("even");
	}
	else if(n%2==1){
		printf("odd");
	}
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
