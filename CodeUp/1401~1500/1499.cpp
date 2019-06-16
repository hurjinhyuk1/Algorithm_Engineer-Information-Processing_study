#pragma warning (disable:4996)
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	
	int n, k;
	int cnt = 1;
	int x;
	scanf("%d %d", &n, &k);
	int tmp;
	vector<int>a;
	for (int i = 0; i < n; ++i) {
		
		scanf("%d", &tmp);
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	if (n / k == 1){
	x = n / k + 1;
	}
	else x = n / k;
	
		for (int j = 1; j<=x; ++j){
			printf("%d ", a[(k*j)-1]);
			
		}
		
		
		return 0;
	}
	

//2 5

//2+(n-1)3
