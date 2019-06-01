#include <cstdio>

int main (void)
{
	int a[101][101]={0,};
	int n;
	int cnt=1;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		for (int j=0; j<n; ++j){
			a[i][j]=cnt++;
		}
	}
	
	for(int i=0; i<n; ++i){
		for (int j=0; j<n; ++j){
			printf("%d ",a[j][n-1-i]);
		}
		printf("\n");
	}
	
	return 0;
	
}
