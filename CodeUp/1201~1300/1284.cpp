#pragma warning (disable:4996)
//n을 입력 받는다. 
//첫번째 소수를 구한다.
#include <cstdio>
int main(void)
{
	int n;
	int ans;
	scanf("%d", &n);
	int flag = -1;
	if (n == 1) {
		printf("wrong number");
	}
	else{
	for (int i = 2; i <= n; ++i) {
		if (n%i == 0) {
			if (n == i) {
				printf("wrong number");
				break;
			}
			int k = n / i;
			for (int s = 2; s <= k; ++s) {
				if (s == k) {
					ans = s;
					flag = 1;
					break;
				}
				if (k%s == 0) {
					flag = 0;
					break;
				}

			}

		}
		if (flag == 1) {
			printf("%d %d", i, ans);
			break;
		}
		else if(flag==0) {
			printf("wrong number");
			break;
	
			}

		}
	}
	return 0;
}

//2 3 5 7 9 113
