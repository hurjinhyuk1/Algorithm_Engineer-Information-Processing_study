#include <cstdio>

float ABS(float n){
	if(n<0)return n*=-1;
	else return n;
}
int main (void)
{
	float n;
	scanf("%f",&n);
	printf("%g",ABS(n));
	
	return 0;
}
