#include <cstdio>

int main (void)
{
	int n;
	int cnt=0;
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		cnt++;
	}
	printf("%d",cnt);
	
	return 0;
}
