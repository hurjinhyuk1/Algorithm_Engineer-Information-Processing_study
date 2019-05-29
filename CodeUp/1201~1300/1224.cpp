#include <cstdio>

int main (void)
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if((double)a/b >(double)c/d)printf(">");
	else if((double)a/b==(double)c/d)printf("=");
	else if((double)a/b<(double)c/d)printf("<");
	
	return 0;
}
