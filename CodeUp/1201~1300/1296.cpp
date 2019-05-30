#include <cstdio>

int main (void)
{
	int n;
	scanf("%d",&n);
	if(n%2==0){
		n=n/2;
		if(n%2==0){
			int k=n/2;
			int j= n/2;
			printf("%d",k*j);
		}
		else {
			int k=n/2;
			int j=n/2+1;
			printf("%d",k*j);
		}
		
	}
		
	else if(n%2==1){
		n--;
	if(n%2==0){
		n=n/2;
		if(n%2==0){
			int k=n/2;
			int j= n/2;
			printf("%d",k*j);
		}
		else {
			int k=n/2;
			int j=n/2+1;
			printf("%d",k*j);
		}
		
	}
	}
	return 0;
}
//71 ->70  35 35 -> 17 18
