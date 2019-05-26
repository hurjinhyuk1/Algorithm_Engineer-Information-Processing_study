#include <cstdio>
#include <iostream>

using namespace std;

int main (void)
{
	int a;
	scanf("%d",&a);
	
	if((a>=30 && a<=40)||(a>=60&&a<=70)) printf("win");
	else printf("lose");
	
	return 0;
}
