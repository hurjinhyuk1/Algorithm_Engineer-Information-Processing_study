#include <iostream>
#include <string>
const int SIZE = 20;
using namespace std;
int main(void)
{

	int a, b, c;
	string f;
	char address[SIZE];
	cin >> a >> b >> c;
	cin.ignore(); // 버퍼를 비워준다
	cout << a << b  << c << endl;
	cin.getline(address, SIZE);
	cout << address << endl;
}