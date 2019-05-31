#include <cstdio>

int main (void)
{
	int arr[101];
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&arr[i+1]);
	}
	for(int j=0; j<2; ++j){
		for(int k=0; k<n; k++)
		printf("%d\n",arr[k+1]);
	}
	
}
