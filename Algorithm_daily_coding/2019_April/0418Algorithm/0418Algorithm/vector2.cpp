#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;

vector< vector<int> > arr;
vector<int> b;
int N;
int sum[3];

int main(void)
{
	
	for (int i = 0; i < 3; i++) {
		cin >> N;
		vector <int> array(N);
		arr.push_back(array);
		printf("%d번째 크기: %d\n", i+1,arr[i].size());
	}
	
	


	
	for (int i = 0; i <arr.size(); ++i) {
		for (int j = 0; j <arr[i].size(); ++j) {
			arr[i][j] = i + j;
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			printf("%1d", arr[i][j]);
		}
		printf("\n");
	}

	// 원소 참조.
	printf("%d\n", arr[1][1]);

	vector<int>::iterator iter;
	
	for (iter = arr[1].begin(); iter!=arr[1].end(); iter++) {
		printf("%d", *iter);
	}
	
	for (int i = 0; i < arr.size(); ++i) {
		arr[i].clear();
	}
	//
	printf("%d", *(arr[1].begin()));
	arr.clear();
}