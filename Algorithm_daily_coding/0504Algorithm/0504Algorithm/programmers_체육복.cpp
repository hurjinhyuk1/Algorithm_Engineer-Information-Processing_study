#include <iostream>
#include <vector>

using namespace std;

 int solution(int n, vector<int>lost, vector<int> reserve) {
	int answer = 0;
	vector<int> u(n + 2, 1); //양쪽 허수를 둠. 하나의 체육복을 가지고 있음
	for (int i = 0; i < reserve.size(); i++) {
		u[reserve[i]]++;
		
	}
	for (int i = 0; i < lost.size(); i++) {
		u[lost[i]]--;
	}

	for (int i = 1; i <= n; i++) {
		if (u[i] == 2 && u[i - 1] == 0) {
			u[i] = u[i - 1] = 1;
		}
		else if (u[i] == 2 && u[i + 1] == 0) {
			u[i] = u[i + 1] = 1;
		}
	}
	for (int i = 1; i <=n; i++) {
		if (u[i] > 0) answer++;
	}

	return answer;
	

}