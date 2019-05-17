#include <cstdio>
#include <set>
#include <vector>
using namespace std;
vector<int> a(5);

int solution(vector<int> a)
{
	set<int> b;

	for (int i = 0; i < a.size(); ++i) {
		int dem = b.size();
		b.insert(a[i]);
		if (dem == b.size()) return a[i];

	}
	return -1;
}
int main(void)
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 2;
	a[4] = 1;

	printf("%d\n", a.size());
	int result = solution(a);
	printf("%d\n", result);

	return 0;
}
// vector를 초기화 하는 두가지 방법
// 기본적으로 vector는 1차원 배열과 같다고 생각하자.
// vector<int>a; 하고 a.push_back(1);
//vector<int> a(5) 길이가 5인 벡터를 만들고, a[0]= 1.. 초기화