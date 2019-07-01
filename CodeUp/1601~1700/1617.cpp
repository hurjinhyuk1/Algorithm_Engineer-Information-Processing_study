#pragma warning (disable:4996)
#include <cstdio>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	char ap[10], bp[10],cp[10];
	int a, b,c;
	int cnt = 1;
	int cnt2 = 1;
	char temp;
	int i = 0;
	scanf("%d", &a);
	b = a;
	c = a;
	while (true) {
		if (a / 10 != 0) {
			a = a / 10;
			cnt++;
		}
		else break;
	}
	
	sprintf(ap, "%d", c);
	sprintf(bp, "%d", b);


	for (int i = 0; i < cnt/2; ++i) {
		temp = bp[i];
		bp[i]= bp[cnt - 1 - i];
		bp[cnt - 1 - i]=temp;

	}
	a = atoi(ap);
	b = atoi(bp);
	int sum = a + b;
	int tempsum = sum;

	while (true) {
		if (sum / 10 != 0) {
			sum = sum / 10;
			cnt2++;
		}
		else break;
	}

	sprintf(cp, "%d",tempsum);
	
	while (i < cnt2 / 2) {
		if (cp[i] != cp[cnt2 - 1 - i]) {
			printf("NO");
			return 0;
			
		}
		else i++;
	}
	printf("YES");
	

	return 0;
}
