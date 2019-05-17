#include <stdio.h>
#include <stdlib.h>
int main (void)
{
char a[6];
char munja[2];
munja[1]='\0';
int b[5];
scanf("%s",a);

for(int i=0; i<5; ++i){
	munja[0]=a[i];
	b[i]=atoi(munja);
	b[i]=1-b[i];
	
}
for(int i=0; i<5; ++i){
	printf("%d ",b[i]);
}
printf("\n");
return 0;	
}



