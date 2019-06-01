#include <cstdio>

int main (void)
{
	int a[101][101];
	int n;
	scanf("%d",&n);
	int count=1;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			a[i][j]=count++;
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
