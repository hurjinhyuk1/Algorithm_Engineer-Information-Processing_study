#include <stdio.h>

int main (void)
{
	
	int a[24]={};
	int number;
	int i;
	int n;
	scanf("%d",&n);
	
	for(i=0; i<n; ++i){
		scanf("%d",&number);
		a[i]=number;
	}
	for(int i=n-1; i>=0; i-- ){
		printf("%d ",a[i]);
	}
	
	return 0;
	
}
