#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <stack>
#pragma warning (disable: 4996)
using namespace std;

int main(void)
{
	stack<char>an;
	string a ="/home/a/./x/../b//c/";
	string c;
	char cstr[100];
	char*result;
	strcpy_s(cstr, a.c_str());

	
	result=strtok(cstr, "/");
	
	
	
	while (result != NULL) {
		c += result;
		c += " ";
		result = strtok(NULL, "/");
		
	}
	// /home a . x.. b c
	for (int i = 0; i < c.size(); i++) {
		if (c[i] == '.') {
			continue;
		}
		else if (c[i] == '..') {
			an.pop();
			continue;

		}
		else if (c[i] == ' ') {
			an.push('/');
			continue;
		}
		an.push(c[i]);
	}
	//cout << an << endl;
	return 0;
}

/*

std::string simplifyPath(std::string path) {
std::stack<std::string> s;
for(int i = 0; i < path.size(); i++) {
std::string str = "";
while(i < path.size() && path[i] != '/') {
str += path[i];
i++;
}
cout<<str;
/*
if(str == "" || str == "/" || str == ".") continue;
if(str == "..") {
if(!s.empty()) s.pop();
continue;
}
s.push(str);
}
while(!s.empty()) {
ans = "/" + s.top() + ans;
s.pop();
}
return ans.empty()?"/":ans;
*/