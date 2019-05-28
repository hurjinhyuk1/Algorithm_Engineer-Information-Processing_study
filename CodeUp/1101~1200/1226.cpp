#include <cstdio>

int main (void)
{
	int a[8],b[7];
	int cnt=0;
	int bun=0;
	for(int i=1; i<=7; ++i){
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=6; ++i){
		scanf("%d",&b[i]);
	}
	for(int i=1; i<=6; ++i){
		for(int j=1; j<=6; j++){
		if(a[i]==b[j]){
		cnt++;	
			
			} 
	}
		
	}
	for(int i=1; i<=6 ;++i){
		if(b[i]==a[7]){
		bun=1;
		}
	}
	
	if(cnt<=2)printf("0");
	else if(cnt==6)printf("1");
	else if(cnt==5&&bun==1)printf("2");
	else if(cnt==5)printf("3");
	else if(cnt==4)printf("4");
	else if(cnt==3)printf("5"); 
	
	
	return 0;
}
