#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(void)
{
	int N, number;
	string word;
	string newWord;
	cin >> N;
	
	for (int i = 0; i < N; ++i) {
		cin >> number >> word;
		for (int j = 0; j < word.size(); j++) {
			for (int k = 0; k < number; k++) {
				newWord += word[j];
			}
		}
		cout << newWord << endl;
		newWord = "";
	}

	return 0;

}