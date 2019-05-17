#include <iostream>
#include <vector>

using namespace std;
enum STATE { ACSENDING, DESCENDING, MIXED};
int main(void)
{
	STATE state;
	vector<int> note(8);
	cin >> note[0];
	if (note[0] == 1) {
		state = ACSENDING;
	}
	else if (note[0] == 8) {
		state = DESCENDING;
	}
	else state = MIXED;

	if (state != MIXED) 
		for (int i = 1; i < 8; ++i) {
			cin >> note[i];
			if (note[0] == 1 && note[i - 1] >= note[i]) {
				state = MIXED;
				break;
			}
			else if (note[0] == 8 && note[i - 1] <= note[i]) {
				state = MIXED;
				break;
			}
		}
	
	if (state == ACSENDING) cout << "ascending" << endl;
	else if (state == DESCENDING) cout << "descending" << endl;
	else cout << "mixed" << endl;



	return 0;
}

//오름차순 -> accending
//내림차순 -> descending
//규칙 x -> mixed