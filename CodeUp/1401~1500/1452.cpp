#include <algorithm>
#include <cstdio>

using namespace std;
bool cmp(int a, int b){
	return a<b;
}
int main (void)
{
	int a[100001];
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&a[i]);
	}
	
	sort(a,a+n,cmp);
	for(int i=0; i<n; ++i){
		printf("%d\n",a[i]);
	}
	
return 0;
}
