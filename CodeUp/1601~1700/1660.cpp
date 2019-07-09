#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
char word[100];
int i=0;
int main (void)
{
	cin>>word;
	int size=strlen(word);
	while(i!=size){
		if(word[i]==','){
			word[i]=' ';
			i++;
			continue;
		}
		
	}
	
		cout<<word;
	
	
	
	
	return 0;
}
