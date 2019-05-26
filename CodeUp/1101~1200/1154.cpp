#include <cstdio>
#include <iostream>

using namespace std;

int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d",a-b);
	}
	else
		printf("%d",b-a);
		
		return 0;
}
