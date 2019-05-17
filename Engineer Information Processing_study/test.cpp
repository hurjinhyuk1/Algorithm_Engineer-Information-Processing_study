#include <stdio.h>


int main (void)
{
	int j;
	int a[3];
	int b[4]={0};
	int mok,nmg;
	for(int j=0; j<2; j++){
		for(int i=0; i<3; i++){
			scanf(" %d",&a[i]);
			b[i+1]+=a[i];
		}
	}
	
	printf("\n");
	/*
	for(int i=0; i<3; i++){
		printf(" %d ",b[i+1]);
		
	}
	*/
	for(int i=3; i>=1; i--){
		mok=b[i]/10;
		nmg=b[i]-mok*10;
		b[i-1]+=mok;
		b[i]=nmg;
	}
	if(b[0]==0)j=1;
	else j=0;
	for(int i=j; i<4; i++){
		printf("%d",b[i]);
	}
	
	
	
	return 0;
}
