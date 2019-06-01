#include <cstdio>

int main (void)
{
	int odd[11]={0,};
	int even[11]={0,};
	int o=0;
	int e=0;
	int oddmax=-1;
	int evenmax=-1;
	int number;
	for(int i=1; i<=10; ++i){
		scanf("%d",&number);
		if(number%2==0)even[e++]=number;
		else odd[o++]=number;
	}
	
	
	for(int i=0; odd[i]!=0; ++i){
		if(oddmax<odd[i])oddmax=odd[i];
	}
	
	for(int i=0; even[i]!=0; ++i){
		if(evenmax<even[i])evenmax=even[i];
	}
	if(oddmax!=-1&&evenmax!=-1){
	printf("%d %d",oddmax,evenmax);
	}
	else if(oddmax==-1){
	printf("%d",evenmax);
	}
	else{
		printf("%d",oddmax);
	}
	
	return 0;
	
}
