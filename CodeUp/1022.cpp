#include <stdio.h>

int main (void)
{
	char a[2001];
	
	scanf("%[^\n]s",a); //\n는 엔터를 제외한 모든 것을 받는다. 
	printf("%s",a);
	
	return 0;
	
	
}
