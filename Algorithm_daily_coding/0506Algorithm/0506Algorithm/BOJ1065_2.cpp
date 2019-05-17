#include <iostream>

using namespace std;

//몇번째 자리수인지 알려주는 함수
int ciper(int n) {
	int count=0;
	while (n != 0) {
		n = n / 10;
		count++;
	}
	return count;
}
// 한수인지 아닌지 알려주는 함수
bool func(int n) {
	int k = ciper(n);
	if (k <= 2) {
		return true;
	}
	int small = n % 10;
	n = n / 10;
	int big = n % 10;
	int diff = big - small;

	for (int i = 0; i < k - 2; ++i) {
		int small = big;
		int big = (n / 10) % 10;
		if (diff != big - small) return false;
		n = n / 10;
	}

	return true;
}
int main(void)
{
	int N;
	int count = 0;
	cin >> N;
	//for문으로 입력 받은 N을 1부터 N까지 돌면서 한수인지 여부 파악
	for (int i = 1; i <= N; ++i) {
		if (func(i) == true) {
			count++;
		}
	}
	cout << count << endl;


	return 0;
}