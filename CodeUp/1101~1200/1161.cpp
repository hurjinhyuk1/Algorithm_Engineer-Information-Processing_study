#include <cstdio>

int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a%2==1){
	printf("�汝�+");
		if(b%2==1)printf("�汝�=礎熱");
		else printf("礎熱=�汝�");	
	}
		else{
		printf("礎熱+"); 
			if(b%2==1)printf("�汝�=�汝�");
			else printf("礎熱=礎熱");	
		
		} 
		
	return 0; 
}
