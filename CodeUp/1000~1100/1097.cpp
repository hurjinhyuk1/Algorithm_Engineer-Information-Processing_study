#include <stdio.h>
int main (void)
{
	int map[20][20];
	
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			scanf("%d",&map[i][j]);
		}
	}
	//printf("-------------------------------------\n");
	int n;
	scanf("%d",&n);
	
	int x[n]={};
	int y[n]={};
	for(int i=0; i<n; ++i){
		scanf("%d %d",&x[i],&y[i]);
	}
	
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			map[i][j]=0;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			map[x[i]-1][y[j]-1]=1;
		}
	}
	
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	
	
}
