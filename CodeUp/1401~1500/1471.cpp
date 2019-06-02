#include <cstdio>


int main (void)
{
	int a[101][101]={0,};
	int b[101][101]={0,};
	int n;
	int cnt=1;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			a[i][j]=cnt++;
		}
	}
	
		
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i%2==0)b[j][i]=a[i][n-1-j];
			else b[j][i]=a[i][j];
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
		
			 printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	/*
		for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i%2==0)printf("%d ",b[i][j]);
			else printf("%d ",b[n-1-][i]);
		}
		printf("\n");
	}
	*/
	return 0;
	
	
}



//00 12 20
//01 11 21
//02 10 22

//00 01 02
//10 11 12
//20 21 22
