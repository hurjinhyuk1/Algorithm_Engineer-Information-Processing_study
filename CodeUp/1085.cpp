#include <stdio.h>
#include <math.h>
int main (void)
{
	int h,b,c,s;
	scanf("%d %d %d %d",&h,&b,&c,&s);
	double x=h*b*c*s;
	double change_size;
	change_size=pow(2,23);
	
	printf("%.1lf MB",x/change_size);

}
