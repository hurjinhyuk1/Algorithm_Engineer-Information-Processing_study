#include <cstdio>
#include <string.h>
char word[101];
char temp[101];
	
char*mysubstr(char*str,int start,int count)
{
	
	int k=0;
	for(int i=start; i<count; ++i){
		temp[k++]=str[i];
	}
	return temp;
}
int main (void)
{
	int a,b;
	scanf("%s",word);
	scanf("%d %d",&a,&b);
	int count=strlen(word);
	printf("%s",mysubstr(word,a,b));
	
}

