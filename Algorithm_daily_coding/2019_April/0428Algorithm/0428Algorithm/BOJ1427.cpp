#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(char a, char b) {
	return a > b;
}
int main(void)
{
	string s;
	cin >> s;
	char sum = 0;
	int size = s.size();
	
	vector<char> v(size, 0);

	for (int i = 0; i < size; ++i) {
		
		v[i] = s[i];
	    cout << v[i];
		sum += v[i];
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < size; i++) {
		cout << v[i];
	}
	cout << endl;
	cout << sum << endl;

	return 0;
}