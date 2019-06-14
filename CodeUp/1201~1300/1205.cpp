#include <cstdio>
#include <math.h>
#include <algorithm>

using namespace std;

int main (void)
{
	double arr[5];
	int a,b;
	double max;
	scanf("%d %d",&a,&b);
	for(int i=0; i<5; ++i){
		if(i==0){
			arr[i]=a+b;
		}
		else if(i==1){
			arr[i]=a-b<b-a? b-a:a-b;
		}
		else if(i==2){
			arr[i]=a*b;
		}
		else if(i==3){
			arr[i]=a/b > b/a ? a/b : b/a;
		}
		else if(i==4){
			arr[i]=pow(a,b)>pow(b,a)?pow(a,b):pow(b,a);
		}
	}
	sort(arr,arr+5);
	printf("%.6lf",arr[4]);
	return 0;
}
