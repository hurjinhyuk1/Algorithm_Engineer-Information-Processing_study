#include <algorithm>
#include <cstdio>

using namespace std;

int main (void)
{
	int a[10001];
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&a[i]);
	}
	
	sort(a,a+n);
	for(int i=0; i<n; ++i){
		printf("%d\n",a[i]);
	}
	
return 0;
}
