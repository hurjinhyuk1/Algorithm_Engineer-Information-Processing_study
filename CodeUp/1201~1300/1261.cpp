#include <cstdio>

int main (void)
{
	int a[11];
	for(int i=1; i<=10; ++i){
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=10; ++i){
		if(a[i]%5==0){
			printf("%d",a[i]);
			break;
		}
		if(i==10) printf("0");
	}
	return 0;
}
