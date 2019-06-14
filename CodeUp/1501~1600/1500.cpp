#include <cstdio>

int main (void)
{
	int a[101][101]={0,};
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
