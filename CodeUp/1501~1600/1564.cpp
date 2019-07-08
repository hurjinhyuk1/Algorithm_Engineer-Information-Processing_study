#include <stdio.h>

int a, b;
// 이 부분에 들어가야 될 코드를 작성하여 제출
int gcd(int a, int b){
	int result=1;
	if(a>b){
		for(int i=1; i<=b; ++i){
			if(a%i==0 && b%i==0)
			result=i;
		}
	}
	else{
			for(int i=1; i<=a; ++i){
			if(a%i==0 && b%i==0)
			result=i;
	}
}
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
