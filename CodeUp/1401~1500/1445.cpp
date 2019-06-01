#include <cstdio>
#include <algorithm>
using namespace std;

int main (void)
{
	int n,m;
	int a[1001]={0,};
	int b[1001]={0,};
	int c[2001]={0,};
	int k=0;
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&a[i]);
		c[k++]=a[i];
	}
	for(int j=0; j<m; ++j){
		scanf("%d",&b[j]);
		c[k++]=b[j];
	}
	//printf("%d",k);
	sort(c,c+k);
	
	for(int i=0; i<k; ++i)
	printf("%d ",c[i]);
	
	return 0;
	
}
