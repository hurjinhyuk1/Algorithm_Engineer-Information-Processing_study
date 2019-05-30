#include <cstdio>

int main (void)
{
	int a,b,c;
	int answer;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=0; i<=c; ++i){
		if((a%i==0)&&(b%i==0)&&(c%i==0)){
			answer=i;
		}
	}
	
	printf("%d",answer);
}
