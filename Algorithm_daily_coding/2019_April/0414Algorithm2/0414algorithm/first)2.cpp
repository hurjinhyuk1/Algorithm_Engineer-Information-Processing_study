#pragma warning(disable 4996)
#include <iostream>
#include <string>

using namespace std;

int main() {
	char a;
	
	a = getchar();
	while (a != -1) {
		
		putchar(a);
		a = getchar();
	}

	return 0;
}

//putchar는 문자 하나를 출력한다.
// getchar는 입력 버퍼에서 엔터가 들어올 때까지 계속 받으며
// 엔터가 들어오면 입력 종료.