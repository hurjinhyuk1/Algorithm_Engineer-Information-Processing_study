#include <stdio.h>


int main (void)
{
	int a[5][5]={0};
	int i,j,k;
	k=0;
	for(int i=0; i<=4; ++i){
		for(int j=4-i; j<=4; j++){
			k++;
			a[i][j]=k;
			
		}
	}
	
	for(int x=0; x<=4; x++){
		for(int y=0; y<=4; y++)
		printf("%3d",a[x][y]);
		printf("\n");
	}
	
}
