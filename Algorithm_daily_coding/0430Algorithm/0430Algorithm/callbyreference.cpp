#include <iostream>

using namespace std;
void foo(int  value) {
	value = 6;
}
int main(void)
{
	int x = 5;
	int*ptr = &x;

	std::cout << x <<std::endl;
	foo(x);
	std::cout << x << std::endl;
}

