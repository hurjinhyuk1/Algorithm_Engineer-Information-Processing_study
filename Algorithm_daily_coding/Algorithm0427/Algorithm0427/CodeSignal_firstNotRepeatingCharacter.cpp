#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

char firstNotRepeatingCharacter(std::string s) {
//문자열 배열을 크기만큼 for문을 돌리면서 추가적인 배열에 몇번씩 반복되었는지 초기화
// 추가적인 배열 선언하고 0으로 초기화 시킨다.
    int check[26]; //알파벳 갯수만큼.
	memset(check, 0, sizeof(check));
	for (int i = 0; i < s.size(); ++i) {
		check[s[i] - 'a']++;
	}

// 초기화된 배열에서 1번만 나온 문자들 중 가장 맨 앞에 있는 것을 return 하고 종료 or return _
	for (int i = 0; i < s.size(); ++i) {
		if (check[s[i]-'a'] == 1) return s[i];
	}
	return '_';
}

int main(void)
{
	string a;
	cin >> a;
	firstNotRepeatingCharacter(a);

	return 0;
}


