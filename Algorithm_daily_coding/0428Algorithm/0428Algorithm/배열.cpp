#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <functional> // sort 함수 내에 greater 즉 내림차순 사용할 때
#include <string>
#include <vector>
char arr[10] = "123456789";

using namespace std;

bool rsc(char a, char b)
{
	return a < b;
}
//sort 함수는 문자열 / 문자/ 숫자 다 정렬 가능.
int main(void)
{
	vector<string> a;
	a.push_back("aa");
	a.push_back("cc");
	a.push_back("bb");
	a.push_back("cb");

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}



	return 0;
}

