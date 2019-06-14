#include <cstdio>
#include <vector>
using namespace std;
int main (void)
{
	double a;
	int b;
	int tmp;
	double data;
	scanf("%lf %d",&a,&b);
	data=a;
	for(int i=0; i<b; ++i){
		scanf("%d",&tmp);
		if(tmp<0){
		b=a*b/100;
		a-=b;
		}
		else{
		b=a*b/100;
		a+=b;	
		}
	}
	printf("%.0f",a);
	if(a>b){
		printf("good");
	}
	else if(a==b){
		printf("same");
	}
	else
		printf("bad");
		
		return 0;
}
