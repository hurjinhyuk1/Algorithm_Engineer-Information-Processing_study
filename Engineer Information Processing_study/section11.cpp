#include <stdio.h>

int main(void)
{
	int i,j,sw;
	i=0,j=0;
	sw=0;
	do{
		i=i+1;
		if(sw==0){
			j=j+i;
			sw=1;
		}
		else if(sw==1){
			j=j-i;
			sw=0;
		}
		
	}while(i<100);
	
	printf("%d",j);
	
	
	
	
	
	
	return 0;
}
