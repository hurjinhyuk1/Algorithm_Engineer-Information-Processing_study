#include <cstdio>
#include <iostream>

int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b&&b==c&&c==a){
		printf("Á¤»ï°¢Çü");
	}
 	else if((a==b||b==c||c==a)&&(a+b>c)&&(b+c>a)&&(c+a>b)){
 		printf("ÀÌµîº¯»ï°¢Çü");
	 } 
	 
	 else if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b)){
	 	printf("Á÷°¢»ï°¢Çü");
	 }
	 
	 else if((a+b>c)&&(b+c>a)&&(c+a>b)){
	 	printf("»ï°¢Çü");
	 } // 2 4 5
	 else{
	 	printf("»ï°¢Çü¾Æ´Ô");
	 } 
	 
	 return 0; 
}
