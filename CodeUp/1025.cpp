#include <stdio.h>

int main (void)
{
	int a,b,c,d,e;
	scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);
	printf("[%d]\n",a*10000);
	printf("[%d]\n",b*1000);
	printf("[%d]\n",c*100);
	printf("[%d]\n",d*10);
	printf("[%d]\n",e*1);
	/*
	printf("[%d0000]\n",a);
	printf("[%d000]\n",b);
	printf("[%d00]\n",c);
	printf("[%d0]\n",d);
	printf("[%d]\n",e);
	*/
	return 0;
}
