#include <cstdio>
#include <string.h>

int main (void)
{
	char word[101];
	char c;
	scanf("%[^\n]s",word);
	int size= strlen(word);
	for(int i=size-1; i>=0; --i){
		printf("%c",word[i]);
	}
	return 0;
}

