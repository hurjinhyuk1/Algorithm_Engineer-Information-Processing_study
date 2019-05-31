#include <cstdio>

int main (void)
{
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		for(int j=-1; j<=i; ++j){
			if(j<n-1-i){
				printf("*");
			}
			else{
				printf(" ");
			}
			printf("\n");
		}
	}
}
