#include <stdio.h>

int main (void)
{
	int N;
	int number;
	scanf("%d",&N);
	int a[23]={0,};

	for(int i=0; i<N; i++){
		scanf("%d",&number);
		a[number-1]++;
	}

	for(int i=0; i<sizeof(a)/sizeof(int); ++i){
		printf("%d ",a[i]);
	}
return 0;
}
