#include <stdio.h>


int main(void)
{
	
	int data[]={5,1,3,4,6,2};
	int dataSize= sizeof(data)/sizeof(data[0]);
	int k;
	for(int i=0; i<dataSize-2; ++i){
		for(int j=0; j<dataSize-1-i; ++j){
			if(data[j]>data[j+1]){
				k=data[j];
				data[j]=data[j+1];
				data[j+1]=k;
			}	
		}
	}
	
	for(int x=0; x<dataSize; x++){
		printf("%d ",data[x]);
	}
	
	return 0;
}
