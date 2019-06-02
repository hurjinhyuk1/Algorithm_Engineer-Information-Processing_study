#include <cstdio>

int main (void)
{
	int a[101][101]={0,};
	int n,m;
	scanf("%d %d",&n,&m);
	int cnt=1;
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j){
			a[i][j]=cnt++;
		}
	}
	// m=4 n=3;
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			printf("%d ",a[m-1-j][n-1-i]);
		}
		printf("\n");
	}
}
