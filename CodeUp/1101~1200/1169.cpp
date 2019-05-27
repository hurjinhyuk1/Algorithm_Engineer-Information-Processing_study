#include <cstdio>

int main (void)
{
	int age,ymd,centry;
	scanf("%d",&age);
	if(age>13){
	ymd=2012-age+1;
	ymd=ymd%100;
	centry=1;	
	}
	else{
		ymd=2012-age+1;
		ymd=ymd%1000;
		centry=3;
	}
	
	printf("%d %d",ymd,centry);
	
	return 0;
	
}
