#include <stdio.h>

int main(void)
{
	char a;
	scanf("%c ",&a);
	printf("%c\n",a);
	while(a!='q'){
		if(a==' ')continue;
		scanf("%c ",&a);
		printf("%c\n",a);
	}
	
	return 0;
}
