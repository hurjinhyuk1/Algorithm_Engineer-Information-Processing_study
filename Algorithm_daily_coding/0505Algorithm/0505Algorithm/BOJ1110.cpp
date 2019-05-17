#include <iostream>
using namespace std;


int main(void)
{
	int n;
	cin >> n;
	int count = 0;
	int start_num = n;

	while (true) {
		count++;
		int n10 = n / 10;
		int n1 = n % 10;
		int m = n1 + n10;
		int k = 10 * n1 + m%10;
		if (k == start_num)break;
		n = k;
	}
	cout << count << endl;

	return 0;
}