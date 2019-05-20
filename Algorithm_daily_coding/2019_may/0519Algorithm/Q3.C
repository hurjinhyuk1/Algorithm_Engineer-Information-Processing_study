

//3. 5개월 핸드폰 사용요금을 입력하여 평균 요금을 구하는 프로그램 작성하시오.


#include <stdio.h>
void main()
{
	int score[5], i;
	int total;
	double avg;


	for (i = 1; i < 6; i++)
	{
		printf("%d번째 요금 = ", i);
		scanf_s("%d", &score[i]);
	}

	total = score[1] + score[2] + score[3] + score[4] + score[5];
	avg = (double)total / 5;

	printf("총 요금은은 %d입니다\n", total);
	printf("5개월 평균 요금은 %lf입니다\n", avg);

}
