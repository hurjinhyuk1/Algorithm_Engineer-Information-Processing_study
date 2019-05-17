#pragma warning(disable 4996)
#include <iostream>
#include <string>

using namespace std;
char* ltrim(char *s) {
	char* begin;
	begin = s;

	while (*begin != '\0') {
		if (isspace(*begin))
			begin++;
		else {
			s = begin;
			break;
		}
	}

	return s;
}

int main() {
	//char ab = '\0';
	char a[100];
	int count = 0;
	cin.getline(a, 100, '\n');
	printf("%d\n", strlen(a));
	printf("%c\n",a[strlen(a)]);
	//a[strlen(a) + 1] = '\0'1;
	printf("%s\n", a);
	//ltrim(a);

	//printf("%s", ltrim(a));
	
	// 앞 공백 제거.
	//['hello world']
	
	for (int i = 0; i < strlen(a); ++i) {
		if (a[i] == ' '||a[i]=='\0') {
			count++;
		}
	}
	//printf("%d", strlen(a));
	//printf("%d\n", count);

	return 0;
}

//putchar는 문자 하나를 출력한다.
// getchar는 입력 버퍼에서 엔터가 들어올 때까지 계속 받으며
// 엔터가 들어오면 입력 종료.