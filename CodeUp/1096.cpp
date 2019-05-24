#include <stdio.h>


int main (void)
{
	int badok[20][20]={};
	int n;
	int x,y;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%d %d",&x,&y);
		badok[x-1][y-1]=1;
	}
	
	
	
	
	
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			printf("%d ",badok[i][j]);
		}
		printf("\n");
	
	}
	return 0;
}
