#include <cstdio>

int main (void)
{
	int n;
	scanf("%d",&n);


for(int i=1; i<=n; ++i){
	for(int j=1; j<=i; ++j){
		printf("*");
	}
	printf("\n");
	if(i==n){
		for(int k=n-1; k>0; k--){
			for(int s=1; s<=k; s++)
			printf("*");
			printf("\n");
		}
	  }
	}	
return 0;
}






//n-> 1 --> 1
//n->2 --. 3
//n->3 --> 5
//n->4 -->7

//1+(n-1)2= an=2n-1
