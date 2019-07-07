#include <stdio.h>

double x;

double f(double x){
	long long int a=x;
	return x-a;
}



// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}
