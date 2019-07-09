#include <iostream>

using namespace std;
int N;
int result;
int main(void)
{
	cin >> N;
	if (N < 10) {
		cout << N;
		return 0;
	}
	while (true) {
		if (N >= 10) {
			result = 0;
			while (N != 0) {
				result += N % 10;
				N = N / 10;
			}
			N = result;
		}
		else {
			cout << result;
			break;
		}

	}




	return 0;
}
