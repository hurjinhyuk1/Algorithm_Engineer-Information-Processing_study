#include <stdio.h>

int main (void)
{
	
	int i,J,K,S,E;
	int a[5][5]={0};
	K=0;
	S=2,E=2;
	for(int i=0; i<=4; ++i){
		for(int J=S;J<=E; J++){
			K++;
			a[i][J]=K;
		}
		if(i>1){
			S=S+1;
			E=E-1;
		}
		else {
			S=S-1;
			E=E+1;
		}
	}
	
	for(int i=0; i<=4; i++){
		for(int j=0; j<=4; j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
