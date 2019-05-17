#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	vector<int>DP(1000);
	vector<int>A(1000);
	int max = 0;
	cin >> N;

	for (int i = 1; i <= N; ++i) {
		cin >> A[i];
	}

	for (int i = 1; i <= N; ++i) {
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				
				if (min < DP[j])
					min = DP[j];
			}
		}
		DP[i] = min + 1;
		if (max < DP[i])
			max = DP[i];
	}

	cout << max << endl;


	return 0;
}