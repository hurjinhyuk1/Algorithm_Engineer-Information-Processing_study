#include <cstdio>

int main (void)
{
	int a,b,sum=0;
	scanf("%d %d",&a,&b);
	
	for(int i=a; i<=b; ++i){
		if(i%2==1){
		printf("+%d",i);
		sum+=i*1;
		
		}
		else {
		printf("-%d",i);
		sum+=i*-1;	
		}
	}
	printf("=%d",sum);
	
	return 0;
}
