#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string a = "home/a/b/c/d";
	string temp;
	for (int i = 0; i < a.size(); i++) {
		while (a[i] != '/'&&i<a.size()) {
			temp += a[i];
			i++;
		}
		if (temp == "." &&temp == "//")continue;
		else if(temp=="..")
	}
	cout << temp << endl;

	return 0;
}