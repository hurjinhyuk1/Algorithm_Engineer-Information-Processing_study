#include <stdio.h>

int main(void)
{
	
	int i,j;
	i=-1,j=0;
	
	do{
		i=i+2;
		j=i+j;
		printf("%d\n",i);
	}while(i<100);
	
	printf("%d %d",i,j);
	
	
	
	return 0;
}
