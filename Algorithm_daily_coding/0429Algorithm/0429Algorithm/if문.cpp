#include <stdio.h>
#pragma warning (disable: 4996)

int main(void)
{
	int password;
	int input_password;
	int count = 0;
	printf("비밀번호를 설정하세요:");
	scanf("%d", &password);

	do {
		printf("비밀번호를 입력하세요(%d)", count+1);
		scanf("%d", &input_password);
		if (password == input_password) {
			printf("비밀번호가 맞습니다.\n");
			break;
		}
		else {
			printf("비밀번호가 틀렸습니다.\n");
			count++;
			if (count == 3) {
				printf("비밀번호를 초기화합니다.\n");
				password = 1247;
			}

		}
	} while (count < 3);
	return 0;
}