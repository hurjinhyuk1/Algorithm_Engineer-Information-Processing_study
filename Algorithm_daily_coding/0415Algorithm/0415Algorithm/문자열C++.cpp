
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{
	char *result;
	int count = 0;
	char str[1000001];

	cin.getline(str, 1000001, '\n'); //띄어 쓰기 까지 입력받음
	result = strtok(str, " ,");
	while (result != NULL) {
		count++;
		result = strtok(NULL, " ,"); //null을 넣어주면 다음 문자의 주소를 반환 해줌.
	}
	printf("%d", count);
	return 0;
}
//문자열 자르는 strok 공부.
