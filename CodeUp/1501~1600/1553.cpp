#include <stdio.h>

double x;

long long f(double x){
	
	long long int t=(long long int)x;


	if(t<x){
	return x+1;

	}
	else{
	return x;		
	}
	
}


// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}
