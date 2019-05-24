#include <stdio.h>

int main (void)
{
	int a[24]={};
	int n;
	int number;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%d",&number);
		a[i]=number;
	}
	int min=24;
	for(int j=0; j<n; j++){
	if(min>a[j])min=a[j];	
	}
	printf("%d",min);
}
