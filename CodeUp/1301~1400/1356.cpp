#include <cstdio>

int main (void)
{
	int n;
	scanf("%d",&n);
	
		for(int j=0; j<n; ++j){
			if(j==0||j==n-1){
			for(int k=0; k<n; k++){
				printf("*");	
			}
		}
		else{
			for(int s=0; s<n; ++s){
				if(s==0||s==n-1){
					printf("*");
				}
				else printf(" ");
			}
			
		}
		printf("\n");
		
			}
			return 0;
					}
		

