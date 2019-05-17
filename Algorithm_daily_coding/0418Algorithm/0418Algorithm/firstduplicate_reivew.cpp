#include <stdio.h>
#include <set>
#include <vector>

using namespace std;


int solution(vector<int> a)
{
	set<int> b;
	for (int i = 0; i < a.size(); ++i) {
		int dem = b.size();
		b.insert(a[i]);
		if (dem == b.size()) {
			return a[i];
		}
		
	}
	return -1;
}

int main(void)
{

	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(2);

	int result = solution(a);
	printf("%d\n", result);


	return 0;
}