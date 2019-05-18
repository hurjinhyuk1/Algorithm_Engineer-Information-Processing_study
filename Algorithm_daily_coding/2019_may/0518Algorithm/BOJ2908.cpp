#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	int numSize = 3;
	string num1, num2 = "";
	string answer = "";
	cin >> num1 >> num2;

	while (1) {
		if (num1[2] == num2[2]) {
			if (num1[1] == num2[1]) {

				if (num1[0] == num2[0]) {
					break;
				}
				if (num1[0] < num2[0])
				{
					answer = num2;
					break;
				}
				else {
					answer = num1;
					break;
				}
			}
			else if (num1[1] < num2[1]) {
				answer = num2;
				break;
			}

			else {
				answer = num1;
				break;
			}
		}
				else if (num1[2] < num2[2]) {
					answer = num2;
					break;
				}

				else {
					answer = num1;
					break;
				}	

	}
	
	for (int i = 2; i >= 0; i--) {
		cout << answer[i];
	}
	cout << endl;

	return 0;
}

//string 으로 접근하는 이유... 각 자리수에 쉽게 접근할 수 있기 때문