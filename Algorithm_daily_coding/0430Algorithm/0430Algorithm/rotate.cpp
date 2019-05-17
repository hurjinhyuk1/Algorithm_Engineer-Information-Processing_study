#include <stdio.h>
#include <iostream>
#pragma warning (disable:4996)
#include <vector>
using namespace std;

vector<vector<int>> print_vector(vector<vector<int>> &b) {


	for (int i = 0; i < b.size(); ++i) {
		for (int j = 0; j < b[0].size(); ++j) {
			b[i][j]=++b[i][j];
			cout << b[i][j];
		}
		cout << " " << endl;
	}
	return b;
}

void sum_vector(vector<vector<int>> &b) {


	for (int i = 0; i < b.size(); ++i) {
		for (int j = 0; j < b[0].size(); ++j) {
			b[i][j]=b[i][j]+1;
			cout << b[i][j];
		}
		cout << " " << endl;
	}
	}



int main(void)
{

	int N;
	scanf("%d", &N);
	int number;
	std::vector<std::vector<int>> a;
	std::vector<std::vector<int>> b;
	std::vector<std::vector<int>> c;
	for (int i = 0; i < N; ++i) {
		vector<int> temp;
		for (int j = 0; j < N; ++j) {
			cin >> number;
			temp.push_back(number);
		}
		a.push_back(temp);
	}

	b=print_vector(a);
	sum_vector(b);

	cout << "-------" << endl;
	cout << b[0][0] << endl;

}