#include <cstdio>

int main (void)
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	int x= year+month+day;
	for(int i=0; i<3; i++){
	}
	printf("%d\n",x/1000);
	printf("%d\n",x/100%10);
	printf("%d\n",x/10%10);
	printf("%d",x%10);
	 
	
	return 0; 
	
	//1502 2 6
	//1510
}

//12 -> 12%10 ->2
//123-> 123%10->3
//123/10-10 
//1231/1000-1000 /100

