#include <stdio.h>

int main (void)
{
	int i;
	double j;
	i=0;
	j=1;
do{
	i++;
	if(i%2==0){
		j=j*i;
	}
	else{
		j=j*i*-1;
	}
}while(i<100);

printf("%11.4e",j);
	
	
	return 0;
}
