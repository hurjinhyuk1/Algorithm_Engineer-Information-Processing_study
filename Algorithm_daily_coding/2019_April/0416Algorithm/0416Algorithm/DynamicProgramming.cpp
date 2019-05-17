#pragma warning(disable 4996)
#include <stdio.h>

int d[100];

int dp(int x)
{
	if (x == 1)return 1;
	if (x == 2)return 1;
	//재귀함수의 종료 조건.
	if (d[x] != 0) {
		//배열 D 안에 0이외의 답이 구해져 있는거 임.
		return d[x];
	}
	//구한 적 없을 때는 기록함. 
	return d[x] = dp(x - 1) + dp(x - 2); 

}

int main(void)
{


	printf("%d", dp(49));
	return 0;
}

//이런식으로 하게 되면 dp(50)의 값을 하면 1번 내려갈 떄 마다 2배씩 증가한다.
// 따라서 50은 2^50이 되므로... 이는 엄청난 시간을 초래함.