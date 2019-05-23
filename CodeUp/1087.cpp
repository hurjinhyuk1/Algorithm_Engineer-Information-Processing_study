#include <stdio.h>
int main (void)
{
	int a;
	int s=0;
	scanf("%d",&a);
	
	for(int i=1; ; ++i){
		s+=i;
		if(s>=a){
			printf("%d\n",s);
			break;
		}
	}
	return 0;
}
