//1. 성적을 입력하여 총점, 평균, 평점을 구하는 프로그램을 작성하시오.
//단, 총점과 평균, 평점은 함수를 사용할 것
#include <stdio.h>
//함수 선언
int put1();
int put2();
int put3();
int sum();
double avg(int tot);
char grade(int avg1);

void main()
{

	int a, b, c;
	int tot;
	double avg1;
	char grade1;
	a = put1();
	b = put2();
	c = put3();
	tot = sum(a, b, c);
	avg1 = avg(tot);
	grade1 = grade(avg1);

	printf("총점은 %d입니다.\n", tot);
	printf("평균은 %lf입니다.\n", avg1);


}

//입력받는 함수(과목1)
int put1()
{
	int a;
	printf("1과목의 점수를 입력하시오.");
	scanf_s("%d", &a);
	return a;
}

//입력받는 함수(과목2)
int put2()
{
	int b;
	printf("2과목의 점수를 입력하시오.");
	scanf_s("%d", &b);
	return b;
}

//입력받는 함수(과목3)
int put3()
{
	int c;
	printf("3과목의 점수를 입력하시오.");
	scanf_s("%d", &c);
	return c;
}

//총점구하는 함수
int sum(int a, int b, int c)
{
	int tot;
	tot = a + b + c;
	return tot;
}

// 평균 구하는 함수
double avg(int tot)
{
	double avg1;
	avg1 = tot / 3;
	return avg1;
}

//평점 구하는 함수
char grade(int avg1)
{
	switch (avg1 / 10)
	{
	case 10:
	case 9:
		printf("학점은 Grade A입니다\n");
		break;
	case 8:
		printf("학점은 Grade B입니다\n");
		break;
	case 7:
		printf("학점은 Grade C입니다\n");
		break;
	case 6:
		printf("학점은 Grade D입니다\n");
		break;
	default:
		printf("학점은 Grade F입니다\n");
	}
}