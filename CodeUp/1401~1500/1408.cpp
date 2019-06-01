#include <cstdio>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string a,b;
	cin>>a;
	int size=a.length();
	b=a;
	for(int i=0; i<size; ++i){
		a[i]+=2;
		printf("%c",a[i]);
	}
	
	printf("\n");
	for(int i=0; i<size; ++i){
		b[i]=(b[i]*7)%80+48;
		printf("%c",b[i]);
	}
	
	
return 0;
}
