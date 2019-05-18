#pragma warning (disable:4996)
#include <stdio.h>


int main(void)
{
	int i = 0;
	int N=5;
	int phoneMoney[5];
	int sum = 0;
	double phoneAvg = 0;
	while (N--) {

		scanf("%d", &phoneMoney[i]);
		sum += phoneMoney[i++];
	}

	phoneAvg = sum / 5;
	printf("%.2f원입니다.\n", phoneAvg);
	



	return 0;
}