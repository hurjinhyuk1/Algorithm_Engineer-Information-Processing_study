#include <iostream>
#include <vector>
using namespace std;

int d( int n) {
	int ret=n;
	while (n != 0) {
		ret = ret + n % 10;
		n = n / 10;
	}
	return  ret;
}


int main(void)
{
	vector<bool> v(10000 + 1, true); 
	
	for (int i = 1; i <= 10000; ++i) {
		int notselfNum = d(i);
		if (notselfNum > 10000) continue;
		v[notselfNum] = false;
	}
	for (int i = 1; i <= 10000; ++i) {
		if(v[i]==true)cout << i << '\n';
	}
	
	return 0;


}