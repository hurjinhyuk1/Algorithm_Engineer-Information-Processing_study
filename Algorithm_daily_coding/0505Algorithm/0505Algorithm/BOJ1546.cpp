#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	
	double N;
	cin >> N;
	vector<double>v(N) ;
	double sum = 0;
	double avg =0;
	for (int i = 0; i < N; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	sort(v.begin(), v.end());
	int new_score = v[N - 1];

	avg = sum / new_score * 100;
	cout << avg / N<<'\n';
}