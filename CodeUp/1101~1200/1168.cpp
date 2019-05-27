#pragma warning (disable:4996)
#include <cstdio>

int main(void)
{
	int a, b, age, sex;
	scanf("%d %d", &a, &b);
	a=a/10000;
	if(sex<=2){
		a+=1900;
	}
	else{
		a+=2000;
	}
	printf("%d",2012-a+1);
	return 0;
}
