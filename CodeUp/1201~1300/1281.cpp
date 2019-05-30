#include <cstdio>

int main (void)
{
	int a,b,sum=0;
	scanf("%d %d",&a,&b);
	
	for(int i=a; i<=b; ++i){
		if(i==a&&a%2==1){
		printf("%d",i);
		sum+=i*1;
		
		}
		if(i!=a&&i%2==1){
		printf("+%d",i);
		sum+=i*1;
		
		}
		else if(i%2==0) {
		printf("-%d",i);
		sum+=i*-1;	
		}
	}
	if(sum>0)
	printf("=+%d",sum);
	else printf("=%d",sum);
	return 0;
}
