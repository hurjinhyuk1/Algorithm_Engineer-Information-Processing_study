#include <iostream>
#include <vector>
using namespace std;
int main(void)

{
	int N, X;
	
	cin >> N >> X;
	vector<int> memory(N);

	for (int i = 0; i < N; ++i) {
		cin >> memory[i];
	}
	for (int i = 0; i < N; ++i) {
		if (X > memory[i])
			cout << memory[i] <<' ';
	}
	cout << endl;



	return 0;
}