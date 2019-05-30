#include <cstdio>

int main (void)
{
	int a,b,sum=0;
	scanf("%d %d",&a,&b);
	
	for(int i=a; i<=b; ++i){
		if(i%2==0){
		sum+=i*-1;
		}
		else sum+=i;
	}
	printf("%d",sum);
	
	return 0;
}
