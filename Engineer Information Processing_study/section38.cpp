#include <stdio.h>


int main (void)
{
	int ary[5][5];
	
	int i,J,k;
	k=0;
	
	for(int i=1; i<=5; ++i){
		for(int j=1; j<=5; ++j){
			k++;
			ary[i][J]=k;
			printf("%5d",ary[i][J]);
		}
		printf("\n");
	}



}
