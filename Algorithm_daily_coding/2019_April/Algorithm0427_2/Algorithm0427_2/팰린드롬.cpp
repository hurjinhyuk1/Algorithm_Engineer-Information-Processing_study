#include <cstdio>
#include<iostream>
#include <string>

using namespace std;

int main(void)
{
	string a;
	cin >> a;

	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == a[a.size() - 1 - i]) count = 1;
		else {
			printf("false");
			return 0;
		}
		
	}
	if (count == 1) printf("true");

	return 0;

}