#include <cstdio>

int main (void)
{
	int a, b;
	int max=0;
	for(int i=0; i<3; ++i){
		scanf("%d %d",&a,&b);
		if(max<a*b)max=a*b;
	}
	printf("%d",max);
	
	return 0;
}
