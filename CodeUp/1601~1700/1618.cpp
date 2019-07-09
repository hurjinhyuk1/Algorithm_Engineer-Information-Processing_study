#include <vector>
#include <iostream>
using namespace std;

int main (void)
{
	int a[3];
	for(int i=0; i<3; ++i){
		cin>>a[i];

	}
	
	for(int k=0; k<3; ++k){
		for(int s=k+1; s<3; ++s){
			
			if(a[k]>a[s]){
				int temp;
				temp=a[k];
				a[k]=a[s];
				a[s]=temp;	
			}
		}
	}
	
	for(int i=0; i<3; ++i){
		cout<<a[i]<<' ';
	}
	
	
	return 0;
}
