#include <stdio.h>
int main (void)
{
	char a[21];
	scanf("%s",a);
	for(int i=0; i<21; i++){
	if(a[i]=='\0')break;
	printf("'\%c\'\n",a[i]);
}		
}
