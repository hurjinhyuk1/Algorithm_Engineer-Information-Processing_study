#include <cstdio>

int main (void)
{
	int a,b;
	char o;
	scanf("%d %c %d",&a,&o,&b);
	switch(o){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
				
		case '*':
			printf("%d",a*b);
			break;
			
		case '/':
			printf("%.2lf",(double)a/b);
			break;
					
	}
}
