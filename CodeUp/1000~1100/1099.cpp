#include <stdio.h>

int main (void)
{
	int map[10][10]={0,};
	for(int i=0; i<sizeof(map)/sizeof(map[0]);++i){
		for(int j=0; j<sizeof(map[0])/sizeof(int); ++j){
			scanf(" %d",&map[i][j]);
		}
	}
	// 맵까지 입력 받기;
	// 개미의 움직임 표현하기. 
	for(int i=0; i<sizeof(map)/sizeof(map[0]);++i){
		for(int j=0; j<sizeof(map[0])/sizeof(int); ++j){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
