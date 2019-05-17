#pragma warning(disable 4996)
#include <stdio.h>


int N;
int A, B;
int count;
int main(void)
{
	
	//A는 5로 나누어질 때의 수
	//B는 3으로 나누어질 떄의 수.
	scanf("%d", &N);

	while (N > 0) {
		//N이 5의 배수일 경우 바로 몫으로 나누어 값 출력.
		//N이 5의 배수가 아닐 경우, 3씩 빼면서 값을 하나씩 증가.
		//5와 3으로도 나누어지지 않는 수일 경우 -1을 출력하면서 프로그램 종료.

		if (N % 5 == 0) {
			A = N / 5;
			break;
		}
		N -= 3; // 3씩 빼준다.
		B++;
		if (N < 0) {
			B= -1;
			break;
		}
	}


	printf("%d\n", A+B);

	return 0;
}