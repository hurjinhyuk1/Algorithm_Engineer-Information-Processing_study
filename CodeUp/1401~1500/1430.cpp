#include <cstdio>
bool a[10000000]={0,};
int main (void)
{
	
	int n;
	int n1;
	int number;
	int number1;
	
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&number);
		a[number]=1;
	}
	scanf("%d",&n1);
	for(int i=0; i<n1; ++i){
		scanf("%d",&number1);
		if(a[number1]==1)printf("1 ");
		else printf("0 ");
	}
	return 0;
}
