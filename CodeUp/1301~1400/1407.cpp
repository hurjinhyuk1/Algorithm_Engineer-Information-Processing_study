#include <cstdio>
#include <string.h>
int main (void)
{
	char a[101];
	char b[101];
	scanf("%[^\n]s",a);
	int size=strlen(a);
	int s=0;
	for(int i=0; i<size; ++i){
		
		if(a[i]==' '){
		continue;
		}
		else b[s++]=a[i];
	}
	
	printf("%s",b);
	return 0;
}
