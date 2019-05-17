#include <string>
#include <vector>
#include <iostream>

using namespace std;

void strTest(void)
{
	string str;
	cout << "string ют╥б";
	cin >> str;
	cout << str << endl;
}
void strTest1(void) {
	string str = "hello";
	str += "world";
	cout << str<<endl;
}
void strTest2(void)
{
	string *str = new string("Hello World");
	cout << str << endl;
	cout << *str << endl;
}
void strTest3(void)
{
	char a[20];
	string b;
	cin.getline(a,20);
	cout << a << endl;
	getline(cin, b);
	cout << b << endl;
}
int main(void)
{
	//strTest1();
	strTest3();
	return 0;
}