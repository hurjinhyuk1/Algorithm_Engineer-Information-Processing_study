#include <stdio.h>

int main (void)
{
	int a,m,d,n;
	int result=0;
	scanf("%d %d %d %d",&a,&m,&d,&n);
	
	for(int i=2; i<=n; ++i){
		a=a*m+d;
	}
	printf("%d\n",a);
	
	return 0;
}
