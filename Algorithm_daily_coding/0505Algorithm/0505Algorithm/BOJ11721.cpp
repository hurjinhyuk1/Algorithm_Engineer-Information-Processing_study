#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	int count = 0;
	cin >> s;

	int length = s.size();
	for (int i = 0; i < length; i++) {
		cout << s[i];
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
		//if(i%10==9)

	}
	cout << endl;

	return 0;
}