#include <cstdio>

int main (void)
{
	int a[101][101]={0,};
	int n,m;
	scanf("%d %d",&n,&m);
	int cnt=1;
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j){
			a[i][j]=cnt++;
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			printf("%d ",a[m-1-j][i]);
		}
		printf("\n");
	}
	return 0;
	
}

//00 01 02 03
//10 11 12 13
//20 21 22 23

//00 01 02
//10 11 12
//20 21 22
//30 31 32

//30 20 10 00
//31 21 11 01
//32 22 12 02
