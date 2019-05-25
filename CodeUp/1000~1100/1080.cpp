#include <stdio.h>

int main (void)
{
	int N;
	scanf("%d",&N);
	int sum=0;
	int i=1;
	while(1){
		if(N<=sum+i){
		break;
		i--;	
		}
		else{
		sum+=i;
		i++;
		} 
	}
	printf("%d\n",i);
	
	return 0;
}
