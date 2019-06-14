#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main (void)
{
	
	int N,C;
	int temp;
	int flag=0;
	scanf("%d %d",&N,&C);
	vector<int> arr;
	for(int i=0; i<N; ++i){
		scanf("%d",&temp);
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	
	for(int i=1; i<=N; ++i){
		
		printf("%d ",arr[i-1]);
		if(i%C==0)printf("\n");
		
		}
	
	}

