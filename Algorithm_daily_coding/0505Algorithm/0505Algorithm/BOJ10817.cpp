#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


int main(void)
{

	vector<int> a(3);

	for (int i = 0; i < a.size(); ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[0] << endl;


	cout << a[1] << endl;



	


	return 0;
}