
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int k;
	string s;
	cin >> k >> s;

	int sum = 0;

	for (int i = 0; i < k; i++) {
		sum += s[i] - '0';
	}
	cout << sum << endl;




	return 0;
}