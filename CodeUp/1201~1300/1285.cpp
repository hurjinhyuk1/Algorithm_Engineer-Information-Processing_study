#include <cstdio>
#include <string.h>
int main (void)
{
	char operation[100];
	char b[51];
	int a[51];
	int sum=0;
	scanf("%s",operation);
	int size=strlen(operation);
	for(int i=0; i<size; ++i){
	if(i%2==0){
		if(operation[i]=='+'){
			sum=operation[i-1]+operation[i+1];
			i=i+2;
		}
		else if(operation[i]=='-'){
			sum=operation[i-1]-operation[i+1];
			i=i+2;
		}
		else if(operation[i]=='*'){
			sum=operation[i-1]*operation[i+1];
			i=i+2;
		}
		else if(operation[i]=='/'){
			sum=operation[i-1]/operation[i+1];
			i=i+2;
		}
		else if(operation[i]=='='){
			break;
		}
		
	}
}
printf("%d",sum);
	
	return 0;
}

//3+3-3*3/3=
