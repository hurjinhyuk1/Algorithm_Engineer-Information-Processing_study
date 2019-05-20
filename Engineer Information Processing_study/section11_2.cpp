#include <stdio.h>

int main(void)
{
	int i,j;
	i=0,j=0;
	
	do{
		i++;
		j=j+i;
		if(i>=99){
			printf("%d",j);
			break;
		}
		i++;
		j=j-i;
		
		
	}while(i<99);
	
	
	
	
	
	
	return 0;
}
