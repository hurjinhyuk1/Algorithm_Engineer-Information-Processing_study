#pragma warning (disable:4996)
#include <cstdio>
#include <string.h>
#include <string>
using namespace std;
int main(void)
{
	char operation[100];
	string temp;
	scanf("%s",operation);
	int size=operation.size();
	while((operation[i]!='+'||operation[i]!='-'||operation[i]!='*'||operation[i]!='/'||operation[i]!='=')||i<size)
	{
		temp+=operation[i++];
	}

	return 0;
	}
