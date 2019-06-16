#include <stdio.h>

int n;

void f(int n){
	for(int i=0; i<n; ++i){
		printf("love\n");
	}
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
