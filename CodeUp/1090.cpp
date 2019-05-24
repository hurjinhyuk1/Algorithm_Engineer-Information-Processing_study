#include <stdio.h>
#include <math.h>
int main (void)
{
	int a,r,n;
	scanf("%d %d %d",&a,&r,&n);
	int result=a*pow(r,n-1);
	printf("%d\n",result);
	return 0;
}
