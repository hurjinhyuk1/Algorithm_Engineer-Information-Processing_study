#include <cstdio>
#include <iostream>

using namespace std;

int main (void)
{
	int a,b;
	cin>>a>>b;
	if(a>b)printf(">");
	else if(a==b)printf("=");
	else printf("<");
	
	return 0;
}
