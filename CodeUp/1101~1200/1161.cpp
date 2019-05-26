#include <cstdio>

int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a%2==1){
	printf("È¦¼ö+");
		if(b%2==1)printf("È¦¼ö=Â¦¼ö");
		else printf("Â¦¼ö=È¦¼ö");	
	}
		else{
		printf("Â¦¼ö+"); 
			if(b%2==1)printf("È¦¼ö=È¦¼ö");
			else printf("Â¦¼ö=Â¦¼ö");	
		
		} 
		
	return 0; 
}
