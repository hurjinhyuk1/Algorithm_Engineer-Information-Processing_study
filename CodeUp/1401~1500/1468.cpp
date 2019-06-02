#include <cstdio>


int main (void)
{
	int a[101][101]={0,};
	
	int n;
	int cnt=1;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			a[i][j]=cnt++;
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i%2==1){
				printf("%d ",a[i][n-1-j]);
			}
			else{
				printf("%d ",a[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;
	
	
}




//00 01 02
//10 11 12
//12 11 10
