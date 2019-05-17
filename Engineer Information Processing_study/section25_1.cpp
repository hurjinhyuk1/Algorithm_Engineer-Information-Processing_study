#include <stdio.h>

int main (void)
{
	int i;
	int a[10];
	int j=-1, max=0;
	
	do{
		j++;
		scanf("%d",&a[j]);
		
	}while(j<9);
	
	for(int i=0; i<10; i++){
		if(max<a[i])max=a[i];
	}
	printf("%d",max);
}
