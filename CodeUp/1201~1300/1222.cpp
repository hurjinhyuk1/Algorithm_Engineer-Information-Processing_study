#include <cstdio>
#include <iostream>

int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	while(a<90){
		a+=5;
		b++;
	}
	printf("%d\n",b);
	if(b>c)printf("win");
	else if(b==c)printf("same");
	else printf("lose");
	
	
	return 0;
}
