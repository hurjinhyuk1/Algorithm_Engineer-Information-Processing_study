#include <cstdio>
#include <string.h>
int main (void)
{
	char a[26]={0,};
	char word[91];
	
	scanf("%[^\n]s",word);
	int size=strlen(word);
	
	for(int i=0; i<size; ++i){
		a[word[i]-'a']++;
	}
	for(int i=0; i<26; ++i){
		printf("%c: %d\n",'a'+i,a[i]);
	}
	return 0;
	
	}	
	

