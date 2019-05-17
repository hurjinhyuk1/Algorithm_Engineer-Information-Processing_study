#include <stdio.h>


int main (void)
{
	int n,i,shift,left,right,buf;
	int d[10]={8,5,6,2,4,1,3,7,9,10};
	n=9;
	left=0;
	right=n;
	
	while(left<right){
		for(i=left; i<=right-1; i++){
			if(d[i]>d[i+1]){
				buf=d[i];
				d[i]=d[i+1];
				d[i+1]=buf;
				shift=i;
			}
		}
		right=shift;
		for(i=right; i>=left+1; i--){
			if(d[i]<d[i-1]){
				buf=d[i-1];
				d[i-1]=d[i];
				d[i]=buf;
				shift=i;
			}
		}
		left=shift;
		
	}
	
	for(int x=0; x<10; ++x){
		printf("%d ",d[x]);
	}
	

	return 0;
}
