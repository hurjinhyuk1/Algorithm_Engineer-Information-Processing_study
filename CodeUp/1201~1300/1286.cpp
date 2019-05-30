#include <cstdio>

int main (void)
{
	int a[5];
	int max=-1000000;
	int min=1000000;
	for(int i=0; i<5; ++i){
		scanf("%d",&a[i]);	
	}
	for(int i=0; i<5; ++i){
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	printf("%d\n",max);
	printf("%d\n",min);
}
