#include <cstdio>

int main (void)
{
	int n;
	int cnt=0;
	scanf("%d",&n);
	
	for(int i=1; i<n; ++i){
		if(n%i==0)cnt++;
	}
	printf("%d",cnt);
	
	return 0;
}
