#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


string solution(vector<string>participant, vector<string>completion)
{
	string answer = "";
	unordered_map<string, int> d;
	for (auto& i : participant) {
		d[i]++;
		cout << d[i] << endl;
	}
		for (auto& i : completion) {
			d[i]--;
	}
		for (auto&i : d) {
			if (i.second > 0) {
				answer = i.second;
				cout << i.second << endl;
				break;
			}
		}
		return answer;
	}

vector<string> solution2(vector<string>participant, vector<string>completion)
{
	string answer = "";
	vector<string> answer_name;
	unordered_map<string, int> d;
	for (auto& i : participant) {
		d[i]++;
		//cout << d[i] << endl;
	}
	for (auto& i : completion) {
		d[i]--;
	}
	for (auto&i : d) {
		if (i.second > 0) {
			answer_name.push_back(i.first);
		}
	}
	return answer_name;
}



	

void print(vector<string>participant, vector<string>completion)
{
	for (auto & i : participant) {
		cout << i << endl;
	}
	

	for (auto & i : completion) {
		cout << i << endl;
	}
	

}

int main(void)
{
	vector<string>answer_name;
	vector<string> participant;
	vector<string>completion;
	participant.push_back("leo");
	participant.push_back("kiki");
	participant.push_back("eden");
	participant.push_back("leo2");
	participant.push_back("kiki2");
	participant.push_back("eden2");



	completion.push_back("eden");
	completion.push_back("kiki");

	
	answer_name=solution2(participant, completion);


	for (auto&i : answer_name) {
		cout << i << endl;
	}


}
