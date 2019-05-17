#include <stdio.h>
#include <set>
#include <vector>
using namespace std;
int firstDuplicate(vector<int> a) {
	set<int> b;
	for (int i = 0; i<a.size(); i++) {
		int dem = b.size();
		b.insert(a[i]);
		if (b.size() == dem) return a[i];
	}
	return -1;
}

int main(void)
{

	vector<int> a = { 2,1,3,5,3,2 };
	//printf("%d", a[1]);
	int result=firstDuplicate(a);

	printf("%d", result);
	return 0;
}