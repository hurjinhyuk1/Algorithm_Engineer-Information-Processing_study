#include <cstdio>

int main (void)
{
	int map[51][51];
	int k,n;
	int cnt=0;
	scanf("%d %d",&k,&n);
	for(int i=1; i<=k; ++i){
		for(int j=1; j<=k; ++j){
			scanf("%d",&map[i][j]);
		}
	}
	
	for(int i=1; i<=k; ++i){
		for(int j=1; j<=k; ++j){
			if(map[i][j]==-1)continue;
			map[i][j]+=n;
			if(map[i][j]>=0&&map[i][j]<=5)cnt++;
		}
		
	}
	printf("%d",cnt);
	
}
