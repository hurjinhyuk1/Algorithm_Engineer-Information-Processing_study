#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

vector<int> v;
vector<int> v_array[3];
vector< vector<int>> v2;


int main(void)
{
	cout << "1" << endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	v_array[0].push_back(1);
	v_array[0].push_back(2);

	v_array[2].push_back(1);
	v_array[2].push_back(2);
	v_array[2].push_back(3);

	v_array[1].push_back(4);
	v_array[1].push_back(5);
	v_array[1].push_back(6);




	for (int i = 0; i < v.size(); ++i) {
		printf("%1d", v[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < v_array[i].size(); j++) {
			printf("%1d", v_array[i][j]);
		}
		printf("\n");
	}
	printf("---\n");

	for (int i = 0; i < 3; ++i) {
		vector<int> element(i+1);
		v2.push_back(element);
	}
	
	for (int i = 0; i < v2.size(); ++i) {
		printf("%d\n", v2[i].size());
	}


	return 0;
}