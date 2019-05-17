#include <iostream>
#include <string>

using namespace std;
int check[26];
int main(void)
{
	
	int count = 0;
	memset(check, 0, sizeof(check));
	
	while (count < 2) {
		string a;
		cin >> a;

		for (int i = 0; i<a.size() - 1; i++) {
			check[a[i] - 'a']++;
			//cout << check[a[i] = 'a'];
		}
		count++;

	}

	for (int i = 0; i < 26; i++) {
		cout << check[i] << endl;
}




	return 0;
}