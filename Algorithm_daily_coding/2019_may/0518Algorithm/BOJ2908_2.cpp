#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string num1, num2 = "";
	int bigNum = 0;
	cin >> num1 >> num2;

	if (num1[2] == num2[2]) {
		if (num1[1] == num2[1]) {
			if (num1[0] > num2[0])bigNum = 1;
			else bigNum = 2;
		}

		else {
			if(num1[1] > num2[1])bigNum = 1;
			else bigNum = 2;
		}
	
	}
	else if (num1[2] > num2[2]) {
		bigNum = 1;
	}
	else bigNum = 2;



	if (bigNum == 1) cout << num1[2] << num1[1] << num1[0] << endl;
	else cout << num2[2] << num2[1] << num2[0] << endl;
}