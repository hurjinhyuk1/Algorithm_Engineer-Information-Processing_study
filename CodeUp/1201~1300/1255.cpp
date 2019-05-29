#include <cstdio>

int main (void)
{
	double a,b,i;
	scanf("%lf %lf",&a,&b);
	
	for( i=a; i<=b; i+=0.01){
		printf("%.2lf ",i);
	}
	
	//printf("%lf %lf",a,b);
	return 0;
}
