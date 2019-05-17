#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{

	int age;
	char bloodType[3];
	char introduce[20];

	printf("나이를 입력하세요:");
	scanf("%d", &age);

	printf("혈액형을 입력하세요:");
	scanf(" %s", bloodType);

	printf("자기소개하세요:");
	
	scanf(" %[^\n]", introduce); //\n(엔터)를 제외하고 모든 문자 받는다.

	printf("제 나이는 %d입니다.\n", age);
	printf("제 혈액형은 %s입니다.\n", bloodType);
	printf("%s\n", introduce);


	return 0;
}