#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	unordered_map<string, int> d;
	unordered_map<int, int> d1;
	string answer = "";
	string answer2;
	d1[35] = 5;
	cout << d1[35] << endl;
	cout << "--" << endl;
	
	for (auto &i : d1) {
		cout << i.first << endl;
		cout << i.second << endl;
	}
	
	return 0;
}
