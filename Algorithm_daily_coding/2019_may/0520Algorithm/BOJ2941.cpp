#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<string>dics = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string s;
	cin >> s;
	int result = 0;
	// ljes=njak
	//lj e s =  nj ak
	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j < dics.size(); j++) {
			if (i + dics[j].size() > s.size()) {
				printf("!");
				continue;
			}
			if (s.substr(i, dics[j].size()) == dics[j]) {
				i = i + dics[j].size() - 1;
			}
		}
		result++;
	}

	cout << result << endl;


	return 0;
	




	

}