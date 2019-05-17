#pragma warning(disable 4996)
#include <stdio.h>

int endday[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


int Month, days;
int main(void)
{
	
	int cnt = 0;
	scanf("%d %d", &Month, &days);


	for (int i = 1; i <Month; ++i) {
		cnt += endday[i-1];
	}
	cnt += days;

	switch (cnt % 7) {
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;

	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	case 0:
		printf("SUN\n");
		break;


	}

	}
