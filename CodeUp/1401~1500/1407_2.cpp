#include <stdio.h>

int main (void)
{
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c!=' ')printf("%c",c);
	}
}
