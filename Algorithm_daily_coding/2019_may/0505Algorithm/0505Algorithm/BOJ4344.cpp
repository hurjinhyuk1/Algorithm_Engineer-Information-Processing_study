#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N;
	int people;
	int num;
	double sum ;
	double avg;
	double count;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		avg = 0;
		sum = 0;
		count = 0;
		cin >> people;
		vector<int> v(people);
		for (int j = 0; j < people; ++j) {
			cin >> v[j];
			sum += v[j];
			
		}
		avg = sum / people;
		for (int k = 0; k < people; k++) {
			 
			if (avg <v[k])count++;
		}
		cout.precision(3);
		cout << fixed;
		cout << (count / people)*100 <<"%"<< endl;
		
	}


	return 0;
}