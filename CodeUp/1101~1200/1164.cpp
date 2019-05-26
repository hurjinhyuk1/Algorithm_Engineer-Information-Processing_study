#include <cstdio>

int main (void)
{
	int a[3]={0,};
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	
	if(a[0]<=170||a[1]<=170||a[2]<=170)	
	printf("CRASH");
	else printf("PASS");
	
}
