#include <cstdio>
#include <string.h>
int main (void)
{
	
	char word[1001];
	scanf("%s",word);
	int size=strlen(word);
	for(int i=0; i<size; ++i){
		if(word[i]>=65&&word[i]<97){
		 word[i]+=32;
		}
		else if(word[i]>96){
			word[i]-=32;
		}
		else continue;
	}
	printf("%s",word);


		return 0;
}

// A;65
//a; 97 
