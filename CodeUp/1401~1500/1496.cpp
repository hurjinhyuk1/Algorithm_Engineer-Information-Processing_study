#include <cstdio>

int main (void)
{
	int arr[101];
	int n;
	scanf("%d",&n);
	int min;
	for(int i=1; i<=n; ++i){
		scanf("%d",&arr[i]);
	}
	
	for(int i=1; i<=n; ++i){
		if(i%2==1)min=arr[i];
		if(min>arr[i+1]){
			min=arr[i+1];
		}
		printf("%d ",min);
		min=1001;
		i++;
	}
	
	return 0;
}
