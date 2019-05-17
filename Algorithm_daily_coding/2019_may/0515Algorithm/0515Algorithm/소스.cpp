#include <cstdio>
#include <iostream>
using namespace std;
enum STATE {ASCENDING,DESCENDING,MIXED};
int main(void)
{
	STATE state;
	int n, i;
	bool a = true;
	bool b = true;

	for (int i = 1; i <= 8; ++i) {
		cin >> n;
		if (n != i)a = false;
		if (9 - i != n)b = false;
	}
	state= a ? ASCENDING : b ? DESCENDING : MIXED;
	if (state == ASCENDING) cout << "ascending" << endl;
	else if (state == DESCENDING) cout << "descending" << endl;
	else cout << "mixed" << endl;

	return 0;

}

//삼항 연산자 이용8
// a ? 참 : 거짓 응용