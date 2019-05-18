#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	string a;
	cin >> a;
	int ans = 0;
	for (int i = 0; i < a.size(); ++i) {
		ans += (a[i] - 'A') / 3 + 3;
		if (a[i] == 'S' || a[i] == 'V' || a[i] >= 'Y')
			ans -= 1;
	}
	cout << ans << endl;


	return 0;
}