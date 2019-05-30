#include <cstdio>
#include <math.h>
int main (void)
{
	int a,n=1,k=1;
	scanf("%d",&a);
	int temp=a;
	while(n*n<=a){
		n++;
	}
	n--;
	while(temp>0){
		temp=temp-(2*k-1);
		k++;
	}
	printf("%d %d",k,n);
	return 0;
}
