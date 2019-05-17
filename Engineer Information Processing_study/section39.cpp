#include <stdio.h>

int main (void)
{
	int a[5][5];
	int i,j,k;
	k=0;
	for(int i=0; i<=4; i++){
		for(int j=0; j<=i; j++){
			k++;
			a[i][j]=k;
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
