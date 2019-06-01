#include <cstdio>

int main (void)
{
	int a[1002];
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; ++i){
		scanf("%d",&a[i]);
	}
	
	for(int i=1; i<=n; ++i){
			printf("%d: ",i);
		for(int j=1; j<=n; ++j){
			if(i==j)continue;
			if(a[i]<a[j]){
				printf("< ");
			}
			else if(a[i]>a[j]){
				printf("> ");
			}
			else{
				printf("= ");
			}
		}
		printf("\n");
	}
	
}

