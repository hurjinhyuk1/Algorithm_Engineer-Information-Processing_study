#include <cstdio>
int main (void)
{
	int n;
	int arr[101];
	int sum=0;
	scanf("%d",&n);
	
	for(int i=1; i<=n; ++i){
		scanf("%d",&arr[i]);
		sum+=arr[i];
		printf("%d ",sum);
	}
	return 0;
}
