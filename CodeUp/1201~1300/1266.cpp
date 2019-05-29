#include <cstdio>

int main (void)
{
	int n;
	int number;
	int sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; ++i){
		scanf("%d",&number);
		sum+=number;
	}
	printf("%d",sum);
	
	return 0;
}
