#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;



vector< vector<int> > arr;
vector<int> b;
int N;
int sum[3];
void vector_add(vector <vector <int> > a) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			sum[i] += a[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		printf("%1d", sum[i]);
		printf("\n");
	}


}
int main(void)
{
	cin >> N;

	for (int i = 0; i < N; ++i) {
		vector <int> array(N);
		arr.push_back(array);
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			arr[i][j] = i + j;
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			printf("%1d", arr[i][j]);
		}
		printf("\n");
	}

	vector_add(arr);


	for (int i = 0; i < N; ++i) {
		arr[i].clear();
	}
	arr.clear();
}