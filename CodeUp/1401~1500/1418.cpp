#include <cstdio>
#include <string.h>
int main (void)
{
	char a[11];
	scanf("%s",a);
	
	for(int i=0; i<=strlen(a); ++i){
		if(a[i]=='t')printf("%d ",i+1);
	}
	
	
	return 0;
}
