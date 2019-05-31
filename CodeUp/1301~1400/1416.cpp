#include <cstdio>

int main (void)
{
	//6 -> 110
	int n;
	int arr[50];
	int i=0;
	scanf("%d",&n);
	if(n==0){
		printf("0");
		return 0;
	}
	
	int cnt=0;
	int x=n;
	int c=n;
	while(n>0){
		n=n/2;
		cnt++;
	}
	
	while(x!=0){
		arr[cnt-1-i]=x%2;
		x=x/2;
		i++;
	}
	for(int i=0; i<cnt; ++i){
		printf("%d",arr[i]);
	}
	return 0;
}
