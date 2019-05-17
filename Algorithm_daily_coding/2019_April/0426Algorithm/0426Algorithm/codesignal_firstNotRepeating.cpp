#include <cstdio>
#include <string>
#include <iostream>


using namespace std;

int main(void)
{
	int check[26];
	
	memset(check,0,sizeof(check));
	//memset(시작주소,바꿀 것, 크기 메모리유형에 따라 해줘야함 ex) int형은 4바이트 이므로, 매번 4바이트 차이나게 설정해줘야함)
	string str = "abacabad";

	for (int i = 0; i < str.size(); ++i) {
		check[str[i] - 'a']++;
	}
	//check 배열 완성
	//c[4,2,1,1]
	for (int i = 0; i < str.size(); i++) {
		if (check[str[i]-'a']==1) return str[i];
	}
	

		return '_';
}