#include <cstring>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

vector<string> a(2);

int main(void)
{
	a[0]="SUNDAY";
	a[1]="SUNDAY1";
	//a.push_back("SUNDAY2");
	vector<string>::iterator iter;
	/*
	cout << a[0].c_str()<< endl;
	cout << a[1].c_str() << endl;
	cout << a[1].front() << endl;
	*/

	for (iter = a.begin(); iter != a.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "-----------" << endl;
	for (auto i : a) {
		cout << i << endl;
	}
	for (int i = 0; i < 2; i++) {
		if (a[i].at(2)) {
			cout << a[i].at(1) << endl;
		}

	}
	a[1].swap(a[0]);
	for (iter = a.begin(); iter != a.end(); ++iter) {
		cout << *iter << endl;
	}
	cout << " " << endl;
	cout << a[1] << endl;
	return 0;
}

//atÀº º¤ÅÍ ³»¿¡¼­ Æ¯Á¤ indexÀÇ °ªÀ» »Ì¾Æ³¿.
// a[i].at(1);