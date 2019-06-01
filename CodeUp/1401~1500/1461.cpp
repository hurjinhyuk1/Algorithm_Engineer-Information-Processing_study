#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main (void)
{
	int arr[101][101];
	int cnt=1;
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			arr[i][j]=cnt++;
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			printf("%d ",arr[i][n-1-j]);
		}
		printf("\n");
	}
	
return 0;

}
