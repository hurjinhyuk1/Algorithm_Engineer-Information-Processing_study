#include <cstdio>
#include <string.h>

int main (void)
{
	char word[101];
	int result1=0;
	int result2=0;
	scanf("%[^\n]s",word);
	int size=strlen(word);
	
	for(int i=0; i<size; ++i){
		if(word[i]=='C'||word[i]=='c'){
			result1++;
			if(word[i+1]=='c'||word[i+1]=='C')result2++;
		}
	
	}

		
	
	printf("%d\n",result1);
	printf("%d",result2);
}
