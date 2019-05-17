#include <cstring>
#include <iostream>
#include <cstdio>

using namespace std;


// strcmp 좌측이 크면 1 좌측이 작으면 -1 같으면 0
int main(void)
{

	char a[3][4] = {"aba","aaa","acc"};
	char temp[10];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (strcmp(a[j], a[j + 1]) > 0) {
				strcpy_s(temp , a[j]);
				strcpy_s(a[j], a[j+1]);
				strcpy_s(a[j+1], temp);

			}
		}
	}
	// aba aaa acc-> aba acc aaa
	//acc aba aaa

	// a b c d



	return 0;
}

