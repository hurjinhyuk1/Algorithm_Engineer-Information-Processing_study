#include <iostream>
#include <vector>

using namespace std;

int d(int a)
{
	int ret=a;
	while (a != 0) {
	ret +=  a % 10;
		a = a / 10;
	}
	return ret;
}

int main(void)
{
	vector<bool> v(10000 + 1, true);// 10001개의 벡터 선언.
	
	for (int i = 1; i < v.size(); ++i) {
		int notSelfNum = d(i);
		if (notSelfNum > 10000) continue;
		v[notSelfNum] = false;
	}

	for (int i = 1; i < v.size(); ++i) {
		if (v[i] == true)
			cout << i << endl;
	}



	return 0;
}