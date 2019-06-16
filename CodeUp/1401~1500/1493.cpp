#include <cstdio>

int main (void)
{
	int arr[101][101]={0,};
	int arr1[101][101]={0,};
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m;++j){
			scanf("%d",&arr[i][j]);
			arr1[i][j]=arr[i][j];
		   }
		}
	
	for(int i=1; i<=n; ++i){
	  for(int j=1; j<=m;++j){
			if(i==1){
				arr[i][j+1]+=arr[i][j];
				printf("%d ",arr[i][j]);
			}
			else{
				arr[i][j]+=arr[i][j-1]+arr[i-1][j];
				printf("%d ",arr[i][j]);
					  
		}
	
		}
			printf("\n");
		}
		return 0;
		
		
}


