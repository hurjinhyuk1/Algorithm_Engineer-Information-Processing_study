#include <cstdio>

int main (void)
{
	int arr[101];
	int n;
	scanf("%d",&n);
	int max;
	for(int i=1; i<=n; ++i){
		scanf("%d",&arr[i]);
	}
	
	for(int i=1; i<=n; ++i){
		if(i%2==1)max=arr[i];
		if(max<arr[i+1]){
			max=arr[i+1];
		}
		printf("%d ",max);
	max=-1001;
		i++;
	}
	
	return 0;
}
