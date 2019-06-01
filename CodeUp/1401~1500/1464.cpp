#include <cstdio>

int main (void)
{
	int a[101][101]={0,};
	int n,m;
	int cnt=1;
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			a[i][j]=cnt++;
		}
	}
	
	
	
	for(int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			printf("%d ",a[n-1-i][m-1-j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
