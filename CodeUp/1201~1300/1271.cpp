#include <cstdio>

int main (void)
{
	int n;
	int max=-1;
	int number;
	scanf("%d",&n);
	
	for(int i=1; i<=n; ++i){
		scanf("%d",&number);
		if(max<number)max=number;
	}
	printf("%d",max);
return 0;
}
