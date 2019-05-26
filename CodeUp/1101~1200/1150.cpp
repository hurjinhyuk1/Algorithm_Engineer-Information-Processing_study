#include <cstdio>

int main (void)
{
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(b>c)printf("%d",c);
		else printf("%d",b);
	}
	else{
		if(a>c)printf("%d",c);
		else printf("%d",a);
	}
	/*
	int min,a,b,c;
	min= a>b ? b:a;
	min= c>min ? min:c;
	printf("%d",min);
	*/
	
	
	return 0;
}
