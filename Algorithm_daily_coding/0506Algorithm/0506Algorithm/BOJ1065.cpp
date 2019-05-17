#include <string>
#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
	vector<int>v(4,0);
	int vector_count=0;
	int N;
	int count = 0;
	cin >> N;
	for (int i = 1; i <=N; ++i) {
		if (i < 100) {
			count++;
			continue;
		}	
		else if (i >= 100) {
		if (i == 1000)continue;
			int s = i;
			while (s != 0) {
				v[vector_count++] = s % 10;
				s = s / 10;

			}
		
			if (((v[0] == v[1]) && (v[1] == v[2]) && (v[2] == v[1])) || ((v[1] - v[0]) == (v[2] - v[1]))) {
				count++;
			}
			
		}
	
		vector_count = 0;
	}
	cout << count << endl;


	return 0;
}