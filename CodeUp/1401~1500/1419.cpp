#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
int main (void)
{
	string a;
	getline(cin,a,'\n');
	int cnt=0;
	int size=a.size();
	
	for(int i=0; i<size; ++i){
		if(a[i]=='l'){
			if(a[i+1]=='o'){
				if(a[i+2]=='v'){
					if(a[i+3]=='e'){
						cnt++;
						i=i+3;			
					}
					
					
				}
			}
		}
	}
	cout<<cnt;
}
