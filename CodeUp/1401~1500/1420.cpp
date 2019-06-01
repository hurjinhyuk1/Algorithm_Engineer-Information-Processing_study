#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;


bool cmp( const  pair<string,int> &a , const  pair<string,int>  &b)
{
	return a.second>b.second;

}
	

int main (void)
{
	int studentScore;
	string name;
	int n;
	scanf("%d",&n);
	
	vector<pair<string,int> > score(n);
	
	for(int i=0; i<n; ++i){
		cin>>name>>studentScore;
		score[i].first=name;
		score[i].second=studentScore;
	}
	
	sort(score.begin(),score.end(),cmp);
	
	cout<<score[2].first;
}
