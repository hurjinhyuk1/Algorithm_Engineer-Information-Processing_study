#include <stdio.h>

int main (void)
{
	
	
	int m,n;
	scanf("%d %d",&m,&n);
	
	for(int i=1; i<=m; ++i){
		for(int j=1; j<=n; ++j){
			printf("%d %d\n",i,j);
		}
	}
	
	
	
	return 0;
}
