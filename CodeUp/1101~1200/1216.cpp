#include <cstdio>

int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	//a:홍보를 하지 않을 경우 수입
	// b: 홍볼르 할 경우의 수입
	// c: 홍보비용 
	
	if(a<b-c)printf("advertise");
	else if(a>b-c)printf("do not advertise");
	else printf("does not matter");
	
	
	return 0;
}
