#include <cstdio>

int main (void)
{
	int n,number;
	int cnt=0;
	scanf("%d",&n);
	
	for(int i=1; i<=n; ++i){
		scanf("%d",&number);
		if(number%2==0)cnt++;
	}
	
	printf("%d",cnt);
	
	
	
	return 0;
}
