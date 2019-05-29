#include <cstdio>

int main (void)
{
	int n,fac=1;
	scanf("%d",&n);
	for(int i=n; i>=1; --i){
		fac=fac*i;
	}
	
	printf("%d",fac);
	
	return 0;
}
