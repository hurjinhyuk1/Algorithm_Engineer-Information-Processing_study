#include <iostream>

using namespace std;

int main(void)
{
	int test_case_number;
	int a, b;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false); 
	cout.tie(NULL);
	cin >> test_case_number;


	for (int i = 0; i < test_case_number; ++i) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	

	return 0;
}