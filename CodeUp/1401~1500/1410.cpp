#include <cstdio>
#include <string.h>
int main (void)
{
	char a[100001];
	
	scanf("%s",a);
	int count1=0;
	int count2=0;
	int size=strlen(a);
	
	for(int i=0; i<size; ++i){
		if(a[i]=='(')count1++;
		if(a[i]==')')count2++;
	}
	printf("%d %d",count1,count2);
	
	return 0;
}
