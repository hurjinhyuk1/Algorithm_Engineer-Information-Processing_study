#include <stdio.h>

int main (void)
{
	
	int arr[5][5];
	
	
	int i,j,k;
	k=0;
	
	for(int i=0; i<5; ++i){
		for(int j=0; j<5; ++j){
			k++;
			arr[j][i]=k;
			
		}
		
	}
	for(int i=0; i<5; ++i){
		for(int j=0; j<5; ++j){
		printf("%5d",arr[i][j])	;	
		}
		printf("\n");
	}
	
	return 0;
	
}
