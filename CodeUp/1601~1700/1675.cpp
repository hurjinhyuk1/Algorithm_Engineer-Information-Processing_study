#pragma warning (disable:4996)
#include <cstdio>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char sentence[201];
	scanf("%[^\n]s", sentence);
	for (int i = 0; i<strlen(sentence); ++i) {
		if (sentence[i]>=65&&sentence[i] <= 67) {
			sentence[i] += 23;
		}

		else if (sentence[i]>'Z'&&sentence[i] <= 'c') {
			sentence[i] += 23;
		}
		else if (sentence[i] == ' ')continue;
		else {
			sentence[i] -= 3;
		}
	}
	cout << sentence;
}



////A= 65
//88
//89
////Z= 90
////a=97
//120
//121
////z=122

