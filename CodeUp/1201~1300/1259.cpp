#include <cstdio>

int main (void)
{
	int n;
	int sum=0;
	scanf("%d",&n);
	
	for(int i=1; i<=n; ++i){
		if(i%2==0)
		sum+=i;
	}
	printf("%d",sum);
}
