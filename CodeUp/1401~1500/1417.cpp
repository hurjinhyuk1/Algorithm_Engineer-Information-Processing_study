#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (void)
{
	std::vector<int>height(10,0);
	
	for(int i=0; i<height.size(); ++i){
		scanf("%d",&height[i]);	
		
	}
	sort(height.begin(),height.end());
	
	printf("%d",height[7]);
	
	return 0;	
}
