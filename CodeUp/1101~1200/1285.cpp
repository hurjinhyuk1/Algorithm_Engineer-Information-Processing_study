#include <cstdio>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int n;
	int sum=0;
	char c;
	scanf("%d",&n);
	//123+456*11/11=
	sum+=n;
	while(true){
		scanf("%c",&c);
		if(c=='=')break;
		scanf("%d",&n);
		if(c=='+'){
			sum+=n;
		}
		else if(c=='-'){
			sum-=n;
		}
		else if(c=='/'){
			sum/=n;
		}
		else if(c=='*'){
			sum*=n;
		}
	}
	printf("%d",sum);
	return 0;
}
