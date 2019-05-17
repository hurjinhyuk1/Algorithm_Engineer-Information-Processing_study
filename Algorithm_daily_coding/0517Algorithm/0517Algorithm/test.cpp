#include <iostream>
#include <vector>



using namespace std;

int main(void)
{
	vector<char> a(26, '1');

	for (int i = 0; i < a.size(); ++i) {
		cout << a[i]+i << endl;
	}




	return 0;
}