#include <cstdio>

int main (void)
{
	int time,score;
	scanf("%d %d",&time,&score);
	while(time<90){
		score++;
		time+=5;
	}
	printf("%d",score);
	
	return 0;
}
