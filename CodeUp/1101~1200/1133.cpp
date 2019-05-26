#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main (void)
{
//char a[100];
//scanf("%[^\n]",a);
//printf("%s",a);
string s;
char a[100];
//getline(cin,s); //getline은 cin s 
cin.getline(a,100); //char 배열용 cin.getline(a,30) 
cout<<a;
return 0;
}
