#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int flag=0;
	char a[5];
	int b[5];
	char munja[2];
	scanf("%s",a); // 10000
	munja[1]='\0';
	
	for(int i=0; i<5; ++i){
		munja[0]=a[i];
		b[i]=atoi(munja);
	}
	for(int i=0; i<5; ++i){
		printf("%d",b[i]);
	}
	printf("\n");
	
	for(int i=0; i<5; ++i){
		if(flag==1){
			b[4-i]=1-b[4-i];
		}
		
		if(b[4-i]==1){
			flag=1;	
		}
	}
	 
	for(int i=0; i<5; ++i){
		printf("%d",b[i]);
	}
	
	
	
	
	return 0;
}

