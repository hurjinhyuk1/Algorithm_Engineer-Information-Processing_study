#include <cstdio>

int main (void)
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	//if((year+month+day)%100==0)printf("대박");
	//else printf("그럭저럭");
	if(((year+month+day)/100%10)%2==0)printf("대박");
	else printf("그럭저럭");
	return 0; 
	
	//1502 2 6
}

//12 -> 12%10 ->2
//123-> 123%10->3
//123/10-10 
//1231/1000-1000 /100

