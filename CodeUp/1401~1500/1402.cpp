#include <cstdio>

int main (void)
{
	int arr[1001];
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; ++i){
		printf("%d ",arr[n-1-i]);
	}
	return 0;
}
