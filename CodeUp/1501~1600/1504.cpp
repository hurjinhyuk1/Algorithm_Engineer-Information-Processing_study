#include <cstdio>

int main (void)
{
	int count=1;
	int n;
	int a[101][101];
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i%2==0)a[i][j]=count++;	
			else a[i][n-1-j]=count++;
		}
	}
	

	
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
		
			printf("%d ",a[j][i]);
		
		}
		printf("\n");
	}
		
	return 0;
}


