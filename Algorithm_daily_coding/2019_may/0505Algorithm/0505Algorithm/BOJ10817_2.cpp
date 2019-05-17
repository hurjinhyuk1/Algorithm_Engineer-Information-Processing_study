#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	//a가 가운데 오는 경우
	if ((b >= a&&a >= c) || (c >= a&&a >= b)) {
		cout << a << endl;
	}

	//b가 가운데 오는 경우
	else if ((c >= b && b >= a) || (a >= b&& b >= c)) {
		cout << b << endl;
	}
	else
		cout << c << endl;
	
	return 0;
}