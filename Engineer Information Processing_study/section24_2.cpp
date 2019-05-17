#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (void)
{

	char a[11];
	char munja[2];
	double b,d,e;
	int c;	
	scanf("%s",a);
	b=0;
	c=-1;
	munja[1]='\0';
	
	while(1){
		c++;
		if(c<=9){
			munja[0]=a[c];
			d=atoi(munja);
			e=d*pow(2,4-c);
			b+=e;
			
		}
		else{
			printf("%8.5f",b);
			break;
		}
	}

	
	
	
	
	return 0;
}
