#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int main(void)
{
	int max_count = 0;
	string a;
	vector<int> wordChecker(26, 0);
	cin >> a;

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] < 97) {
			a[i] += 32;
			wordChecker[a[i]-'a']++;
			continue;
		}
		wordChecker[a[i] -'a']++;
		
	}
	
	
	int maxAlph;
	int maxNum = -1;

	for (int i = 0; i < 26; ++i) {
		if (maxNum < wordChecker[i]) {
			maxNum = wordChecker[i];
			maxAlph = i;
		}
		else if (maxNum == wordChecker[i]) {
			maxAlph = -1;
		}
	}

	if (maxAlph == -1)cout << "?" << endl;
	else printf("%c\n", maxAlph + 'A');
	


	return 0;
}