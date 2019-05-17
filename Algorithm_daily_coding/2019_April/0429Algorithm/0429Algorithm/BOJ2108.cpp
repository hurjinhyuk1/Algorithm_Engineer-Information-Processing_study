#include <vector>
#include <cmath>
#include <algorithm>
#include< iostream>
using namespace std;


int main(void)
{
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end()); // 오름 차순 정렬

	float avg = 0;
	for (int i = 0; i < n; ++i) {
		avg = avg + v[i];
	}
	avg = floor(avg / n + 0.5);
	cout << avg << endl;
	return 0;
}