#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	vector<vector<int>>a;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		vector<int>element(n+i) ;
		a.push_back(element);
	}
	cout << a.size()<<endl;
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i].size(); j++) {
			a[i][j] = i + j;
		}
	}

	cout << a[0].size() << endl;
	cout << a[1].size() << endl;
	cout << a[2].size() << endl;

		

	return 0;
}