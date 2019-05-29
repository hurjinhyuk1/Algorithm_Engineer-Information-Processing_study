#include <cstdio>

int main (void)
{
	int n;
	int cnt=0;
	int flag=0;
	int div=10;
	scanf("%d",&n);
	
	for(int i=1; i<=n; ++i){
	if(i%10==1){
	cnt++;
	//printf("%d\n",i);	
	}
}
	printf("%d",cnt);
	
	return 0;
}
