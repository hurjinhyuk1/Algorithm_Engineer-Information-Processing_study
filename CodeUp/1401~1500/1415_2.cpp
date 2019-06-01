#include <cstdio>

int main (void)
{
	
	int oddmax=0;
	int evenmax=0;
	int number;
	for(int i=1; i<=10; ++i){
		scanf("%d",&number);
		if(number%2==0){
			if(number>evenmax)		
		evenmax=number;
		}
		else{
			if(number>oddmax)
		oddmax=number;	
		} 
	}
	
	if(oddmax)printf("%d ",oddmax);
	if(evenmax)printf("%d",evenmax);
	
	
	
	return 0;
	
}
