#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;


int main(void)
{
	//알파벳 갯수만큼의 char형 vector 26개 선언, -1로 초기화.
	// string을 입력 받는다.
	// 받은 string을 for문을 돌면서 첫번째 글자의 알파벳 을 'a'로 뺴줘서 자리수 맞춤
	vector<char> alpa(26, -1);
	int location = -1;
	string word;
	cin >> word;
	for (int i = 0; i < word.size(); ++i) {
		location++;
		if (alpa[word[i] - 'a'] != -1)continue;
		alpa[word[i] - 'a'] = location;
	}

	for (int i = 0; i < alpa.size(); i++) {
		cout << alpa[i] << " ";
	}
	cout << endl;


}