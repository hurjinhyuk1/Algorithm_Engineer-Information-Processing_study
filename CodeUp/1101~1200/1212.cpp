#include <stdio.h>

int main (void)
{
	int a[3];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	int max=-1;
	int hap=0;
	for(int i=0; i<3; ++i){
		if(max<a[i]) max=a[i];
	}
	for(int i=0; i<3; ++i){
	if(a[i]!=max)hap+=a[i];
	}
	//printf("%d",hap);
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[0]){
		printf("yes");
	}	
	else if(max<hap){

		printf("yes");
	}
	else printf("no");
	
	
	
	return 0;
}

//2 3 4
