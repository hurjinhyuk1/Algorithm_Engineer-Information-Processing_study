#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string N;
	cin >> N;
	int sum = 0;
	//UNUCIC
	for (int i = 0; i < N.size(); i++) {
		if (N[i] == 'S'||  N[i]=='V'|| N[i] > 'X') {
			sum -= 1;
		}
		sum+=(N[i] - 'A') / 3 + 3;
	}
	cout << sum << endl;
}

// ABC/ DEF/ GHI/ JKL/MNO/PQRS/TUV/WXYZ
//   3  4      5  6   7  8     9   10
// ABC/ DEF/ GHI/ JKL/MNO/PQR/STU/VWX/YZ
//   3  4      5  6   7    8   9   10 11

//