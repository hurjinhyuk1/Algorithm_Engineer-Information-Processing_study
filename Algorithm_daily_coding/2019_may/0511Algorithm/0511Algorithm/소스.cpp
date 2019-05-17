#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{	
	int i = 0;
	string a = "/home/a/./x/../b//c/";
	//home a . 
	char c[100];
	char realpath[100];
	strcpy(c, a.c_str());

	char*result = strtok(c, "/");
	
	
	
	while (realpath[i]!= '\0') {
		cout << result << "";
		while (result[i] != '\0') {
			realpath[i++]= result[i];
		}

		result = strtok(NULL,"/");
	}
	
	while (result != NULL) {

		cout << result;
		result = strtok(NULL, "/");
	}

	
}