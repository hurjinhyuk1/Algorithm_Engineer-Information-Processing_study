#include <stdio.h>

int main (void)
{
	char a[11];
	int sum=0;
	for(int i=0; i<10; ++i){
		scanf("%c",&a[i]);
		sum+=a[i]-48;
	}
	if(sum%7==4)printf("suspect");
	else printf("citizen");
	
	
	
	return 0;
}
