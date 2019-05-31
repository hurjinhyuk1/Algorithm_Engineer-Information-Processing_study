#include <cstdio>

int main (void)
{
	int a[10];
	int n;
	for(int i=0; i<10; ++i){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	printf("%d",a[n-1]);
	
	return 0;
}
