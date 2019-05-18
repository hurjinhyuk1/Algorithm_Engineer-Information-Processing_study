#pragma warning(disable:4996)
#include <stdio.h>


void pointChecker(int point)
{
	
	if (point >= 70) printf(" vip회원입니다.\n");
	else if (point > 30 &&point<70) printf("  우수회원입니다.\n");
	else printf(" 일반회원입니다.\n",point);
	
}
int main(void)
{
	char name[20];
	char phoneNumber[20];
	int pointScore;
	printf("이름: ");
	scanf("%s",name);
	printf("연락처: ");
	scanf("%s", phoneNumber);
	printf("포인트점수(0~100): ");
	scanf("%d", &pointScore);


	printf("%s 고객님의 포인트 점수는 %d 점으로", name, pointScore);
	pointChecker(pointScore);


	return 0;
}