#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int A, B, C,D;
	cin >> A >> B >> C;
	vector<int> a(10, 0);
	D = A*B*C;

	
		while(D != 0) {
			a[D % 10]++;
			D = D / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout<<a[i]<<endl;
		
	}


	// 1000을 3번 곱하면, 10억
	// int는 21억까지 커버가능.
	// 2000면 longlong 사용하자




}