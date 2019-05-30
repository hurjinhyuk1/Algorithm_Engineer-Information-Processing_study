#include <cstdio>
#include <iostream>
using namespace std;
int main (void)
{
	int n;
	int max=-1;
	int min=101;
	int number;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>number;
		if(max<number)max=number;
		if(min>number) min=number;
	}
	printf("%d %d",max,min);
	
	return 0;
}
