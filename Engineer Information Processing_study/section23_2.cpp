#include <stdio.h>


int main (void)
{
	char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int b ,c,e,f;
	scanf("%d %d",&b,&c); //b는 변환할 진수 c는 숫자
	int d=1;
	while(d<=c){
		d=d*b;
	} 
	// d=32 c 31
	while(1){
	
	if(d>1)d=d/b; // d=16
	e=c/d; //몫 31/16=1
	f=c- e*d;
	printf("%c",a[e]);
	 if(d!=1)
	 c=f;
	 else 
	 	break;
	
	}
	
	
	
}
