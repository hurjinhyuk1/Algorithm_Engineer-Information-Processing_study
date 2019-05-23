#include <stdio.h>
#include <math.h>

int main (void)
{
	int w,h,b;
	scanf("%d %d %d",&w,&h,&b);
	double x=w*h*b;
	printf("%.2lf MB",x/8/1024/1024);
	
	return 0;
}
