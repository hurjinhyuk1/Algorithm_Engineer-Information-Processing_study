#include <cstdio>

int main (void)
{
	int cal[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year, month;
	scanf("%d %d",&year,&month);
	
	if((year%4==0&&year%100!=0)||year%400==0){
		if(month==2){
			cal[month-1]++;
		}
		
	}
	
	printf("%d",cal[month-1]);
	
	return 0;
}
