#pragma warning (disable :4996)
#include <cstdio>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	b=a*60+b;
//	printf("%d\n",b);
	b-=30;
	a=a/60;
	b=b%60;
	printf("%d %d", a, b);

	return 0;
}

	/*
	if ((a == 0) && (b < 30)) {
		a = 24;
	}
	if (b<30) {
		a--;
		b = 60 - 30 + b;
	}
	else {
		b = b - 30;
	}
*/
