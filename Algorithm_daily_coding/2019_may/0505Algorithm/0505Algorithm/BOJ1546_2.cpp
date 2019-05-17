#include <iostream>


using namespace std;

int main(void)


{
	int N;
	int num; // 새로 입력 받은 정수
	int max_num = -1;
	double avg_num = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		if (max_num < num)max_num = num;
		avg_num += num;
	}
	// avg_num에는 모든 수의 합
	// max_num에는 최대로 큰 값.
	cout.precision(6);
	cout << fixed;
	cout << (avg_num / N) / max_num * 100 << endl;


	return 0;
}