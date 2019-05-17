#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;


int N;
vector< vector<int> > arr; //2차원 배열



int main(void)
{
	cin >> N;

	for (int i = 0; i < N; ++i) {
		vector<int> element(N);
		arr.push_back(element);
	}

	cout << arr.size() << endl;

	for (int i = 0; i < N; ++i) {
		cout << arr[i].size() << endl;
		for (int j = 0; j < N; ++j) {
			arr[i][j] = N;
		}
	}
	cout << endl;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < N; ++i) {
		arr[i].clear();
		cout << arr[i].size() << ",";
	}
	cout << endl;

	arr.clear();

	cout << arr.size() << endl;

	return 0;
}