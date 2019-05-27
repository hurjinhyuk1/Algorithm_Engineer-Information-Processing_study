#include <cstdio>

int main (void)
{
	int a[3];
	int max;
	int second=0;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	// 1 2 3
	max= a[0]>a[1] ? a[0]: a[1];
	//printf("%d",min);
	max= max>a[2] ? max:a[2];
	//최댓값 구함.

	
		
	for(int i=0; i<3; i++){
		if(max>=a[i]&&second<=a[i]){
			second=a[i];
		}
	} 
	printf("%d",second);
	
	return 0;
}

