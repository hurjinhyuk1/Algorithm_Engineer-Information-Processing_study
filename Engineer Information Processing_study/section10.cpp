#include <stdio.h>

int main (void)
{
	int i,j;
	i=0,j=0;
	
	do{
		i++;
		j=i+j;
	}while(i<100);
	
	printf("%d %d",i,j);
	
	
	
	
	
	
	
	return 0;
}
