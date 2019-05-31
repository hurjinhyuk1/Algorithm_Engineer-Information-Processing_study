#include <cstdio>

int main (void)
{
	
	int arr[1001];
	int n;
	scanf("%d",&n);
	
	for(int i=1; i<=n; ++i){
		scanf("%d",&arr[i]);
	}
	
	for(int i=1; i<=n; ++i){
		for(int j=i; j<=n; j++){
			printf("%d ",arr[j]);
		}
		if(i>1){
			for(int k=1; k<i;k++){
				printf("%d ",arr[k]);
			}
		}
		printf("\n");
	}
	return 0;
}

// 1 2 3 4 5
// 2 3 4 5 1
// 3 4 5 1 2
// 4 5 1 2 3
// 5 1 2 3 4 
