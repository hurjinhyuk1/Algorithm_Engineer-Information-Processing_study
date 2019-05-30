#include <cstdio>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (void)
{
	char a[10];
	scanf("%s",a);
	int sum=0;
	for(int i=0; i<10; ++i){
		//(a[i]-'48');
		printf("%d\n",a[i]-'48');
	}
	//if(sum%7==4)printf("suspect");
	//else printf("citizen");
	return 0;
}
