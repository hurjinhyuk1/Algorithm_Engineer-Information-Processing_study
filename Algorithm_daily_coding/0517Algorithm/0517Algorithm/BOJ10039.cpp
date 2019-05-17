#include <iostream>
using namespace std;



int main(void)
{
	int T = 5;
	int i = 0;
	int get_score;
	int sumScore = 0;
	double avgScore = 0;
	while (T--) {
		cin >> get_score;
		if (get_score < 40) get_score = 40;
		sumScore+=get_score;

	}
	avgScore = sumScore / 5;
	cout << avgScore << endl;
	



	return 0;
}