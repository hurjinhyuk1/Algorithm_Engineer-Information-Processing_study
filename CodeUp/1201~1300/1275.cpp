#include <cstdio>

int main (void)
{
	int n,k,mul=1;
	scanf("%d %d",&n,&k);
	// 2 4
	for(int i=1; i<=k; ++i){
		mul=mul*n;
	}
	printf("%d",mul);
	
	return 0;
}
