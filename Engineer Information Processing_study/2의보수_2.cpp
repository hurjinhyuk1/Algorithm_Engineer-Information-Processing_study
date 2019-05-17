#include <stdio.h>

int main (void)
{
int i,j;
int a[5]={0,1,0,1,0},b[5];

for(i=4; i>=0; i--){
	if(a[i]==1)
	break;
	b[i]=a[i];
	}
b[i]=a[i];

for(j=i-1; j>=0; j--){
	b[j]=1-a[j];
}

for(int k=0; k<5; k++)
printf("%d",a[k]);

printf(" ");
for(int k=0; k<5; k++)
printf("%d",b[k]);

return 0;
}
