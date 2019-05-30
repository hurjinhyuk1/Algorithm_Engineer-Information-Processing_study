#include <cstdio>

int main (void)
{
	int a,b;
	int result=1;
	int result2=1;
	scanf("%d %d",&a,&b);
	int x=b;
	while(b--){
		result=(a--)*result;
		result2=(x--)*result2;
	}

	printf("%d",result/result2);
	
	return 0;
}
