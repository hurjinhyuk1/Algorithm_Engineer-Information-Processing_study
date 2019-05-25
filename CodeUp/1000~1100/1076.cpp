#include <stdio.h>

int main (void)
{
	char a;
	scanf("%c",&a);
	int length=a-'a';
	for(int i=0; i<=length; ++i){
		printf("%c ",'a'+i);
	}
}
