#include <iostream>
using namespace std;


int main(void)
{
	int N;
	int n10, n1;
	int m; //십의 자리와 일의 자리의 합으로 이루어지는 수
	int k; //새로 정의 된 수.
	int count = 0; // 사이클의 수를 구하기 위한 변수
	int start_num;
	cin >> N;
	start_num = N;

	while (true) {
		
		count++;
		n10 = N / 10; // 십의 자리수
		n1 = N % 10; // 일의 자리수
		m = (n10 + n1)%10;
		k = (10 * n1 + m);
		if (k == start_num)break;
		N = k;

	}
	cout << count << endl;
	

	return 0;
}