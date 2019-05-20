#include <iostream>

using namespace std;
int main(void)
{
	int N;
	cin >> N;
	int index = 1;
	int result = 1;
	
			
	if (N != 1) {
		N = N - 1;
		while (1) {
			N = N - 6 * index;
			result++;
			if (N <= 0) {
				break;
			}
			index++;
		}
	}

	cout << result << endl;



	return 0;
}
///
// n==1 1;
// n!=1 , 2~7-->2 8~19 --->3 20~37 --->4
//          6         12       18
// result= 1+(n-1)6 = 6n-5;