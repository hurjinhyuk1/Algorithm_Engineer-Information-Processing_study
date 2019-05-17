#include <iostream>

using namespace std;

int arr[11]; //1~10까지 저장하기 위해서
int fib(int n)
{
	if (n == 1) {
		arr[n] = n;
		return 1;
	}

	if (!arr[n]) arr[n]=n;
	return n*fib(n - 1);
}
//3 -> 3*fib(2)
//           2*fib(1)
//               return 1;
int main(void)
{
	int result=fib(6);
	cout << result << endl;
	

}