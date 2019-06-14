#include <cstdio>

int main (void)
{
	int a[51][51];
	int b[51][51];
	int n;
	scanf("%d",&n);
	int number=1;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			a[i][j]=number++;
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
