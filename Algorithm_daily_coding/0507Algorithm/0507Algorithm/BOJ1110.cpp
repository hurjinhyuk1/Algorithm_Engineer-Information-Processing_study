#include <iostream>


using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int start_num = N; // 처음 수를 저장하기 위함.
	int count = 0;
	while (true) {
		count++;
		int m1 = N % 10; //1의 자리
		int m10 = N / 10; //10의 자리
		int k = (m1 + m10)%10;

		N = m1 * 10 + k;
		if (N == start_num)break;
	}
	cout << count<<endl;


}