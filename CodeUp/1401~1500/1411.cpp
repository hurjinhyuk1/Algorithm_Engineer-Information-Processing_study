#include <cstdio>

int main (void)
{
	int n;
	int a[51];
	int b[51]={0,};
	scanf("%d",&n);
	for(int i=1; i<=n-1; ++i){
		scanf("%d",&a[i]);
	}
	for(int k=1; k<=n; k++){
		if(b[a[k]]==0) b[a[k]]=1;
	}
	for(int s=1; s<=n; ++s){
		if(b[s]==0)printf("%d",s);
	}
	return 0;
}
