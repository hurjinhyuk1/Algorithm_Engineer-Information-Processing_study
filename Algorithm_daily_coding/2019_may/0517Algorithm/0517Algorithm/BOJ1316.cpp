#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string words;
	
	int N;
	int cnt = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> words;
		bool groupVoca = true;
		vector<int> checkWord(26, false);
		for (int j = 0; j < words.size(); j++) {
		
		if (checkWord[words[j] - 'a'] == false) {
			checkWord[words[j] - 'a']=true;
			
		}
		else if (words[j]!=words[j-1]) {
			groupVoca = false;
			break;
		}
		

	}
	if (groupVoca)cnt++;
		
	}
	cout << cnt << endl;

	//그룹 체크를 위한 벡터 26개를 -1로 초기화 시킴.
	// 단어를 몇개 받을 것인지 입력
	//for문을 통해 단어를 입력 받음
	// 받음과 동시에 그룹단어인지 체크한다.



	return 0;
}