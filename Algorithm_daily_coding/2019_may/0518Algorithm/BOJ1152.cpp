#include <string>
#include <iostream>


using namespace std;

int main(void)
{

	string s;
	int count = 0;

	while (1) {
		if(cin>>s)count++;
		else break;
	}
	cout << count << endl;


}