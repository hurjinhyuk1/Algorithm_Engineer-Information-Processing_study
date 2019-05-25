#include <stdio.h>

int main (void)
{
	int a;
	scanf("%d",&a);
	for(int i=0; i<=a; ++i){
		if(i%3==0)continue;
		else printf("%d ",i);
	}
	return 0;
}
