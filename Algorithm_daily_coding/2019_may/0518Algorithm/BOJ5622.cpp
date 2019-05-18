#include <iostream>
#include <string>


using namespace std;

int main(void)
{
	string word = "";
	cin >> word;
	int result = 0;
	int size = word.size();

	for (int i = 0; i < size; ++i) {
		if (word[i] == 'Z')word[i] -= 1;
		if (word[i] >= 'S')word[i] -= 1;
		result += (word[i]-'A') / 3+3;
	}

	cout << result << endl;



	return 0;
}