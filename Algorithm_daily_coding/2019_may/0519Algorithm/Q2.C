


//2. 산기대 쇼핑몰의 고객 정보를 입력하여 회원 등급을 구하는 프로그램을 작성하시오. 
//(단 포인트 점수 체크는 함수 사용할 것)
//
//고객 정보 : 이름, 연락처, 포인트점수
//
//포인트 점수 : (0~100) : 포인트 점수가 30점미만  일반, 70점 미만 : 우수, 70점 이상 : vip
//
//[입력 양식]
//고객이름 : 장나라
//	연락처 :
//	   포인트점수(0~100) : 80
//
//		   [출력 양식]
//	   장나라 고객님의 포인트 점수는 80점 으로  vip 회원 입니다.

#include <stdio.h>
char fname();
int fnum();
int fgrade();
char fstandard(int gra);



void main()
{
	char num, name, stan;
	int gra;
	scanf("%s");
	scanf("%d");

	
	printf("%s고객님의 포인트 점수는 %d점 으로 %s 회원 입니다.", name, gra, stan);

}



char* fname()
{
	char name[20];
	printf("이름을 입력 하세요:");
	scanf_s("%s", &name,sizeof(name));
	return name;
}

int fnum()
{
	char num;
	printf("연락처을 입력 하세요:");
	scanf_s("%s", &num);
	return num;
}

int fgrade()
{
	int gra;
	printf("포인트을 입력 하세요:");
	scanf_s("%d", &gra);
	return gra;
}

char fstandard(int gra)
{
	char stan;

	if (gra >= 70)
		stan = "vip";
	else if (gra < 70)
		stan = "우수";
	else if (gra < 30)
		stan = "일반";

	if (gra = 0 || gra > 100)
	{
		printf("오류입니다.\n");
	}

	return stan;

}