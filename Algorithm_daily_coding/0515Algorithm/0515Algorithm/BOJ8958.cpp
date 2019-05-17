#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	string a;
	cin >> N;

	while (N--) {
		cin >> a;
		int size = a.size();
		int addNum = 0;
		int ret = 0;
		for (int i = 0; i < size; ++i) {
			if (a[i] == 'O')addNum++;
			else addNum = 0;
			ret += addNum;
		}
		cout << ret << endl;
	}

	return 0;
}