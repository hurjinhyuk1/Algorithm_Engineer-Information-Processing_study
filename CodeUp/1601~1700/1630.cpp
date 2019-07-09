#include <string>
#include <iostream>
#include <vector>
using namespace std;
int N;
vector<string>a;
string changeword="AMOLED";
int main (void)
{
	string word;
	cin>>N;
	for(int i=0; i<N; ++i){
		cin>>word;
		a.push_back(word);
	}
	
	for(int i=0; i<N; ++i){
	cout<<a[i]<<endl;
	if(i==N-1)break;
	cout<<changeword<<endl;
	}
	
}
