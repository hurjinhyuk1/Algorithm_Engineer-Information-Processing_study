#include <stdio.h>

int main (void)
{
	double percent1,percent2,percent3;
	int score1,score2,score3;
	
	scanf("%lf %d",&percent1,&score1);
	scanf("%lf %d",&percent2,&score2);
	scanf("%lf %d",&percent3,&score3);
	
	
	printf("%.1lf",percent1*score1+percent2*score2+percent3*score3);
	
}
