#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>

using namespace std;


int main(void)
{
	int count;
	int number[100];
	int sum = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d",&number[i]);
// scanf로 입력 받을 것을 하나씩 분리해서 더해야함.
		sum += number[i];
	}
	printf("%d\n", sum);



	return 0;
}