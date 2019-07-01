#include <stdio.h>

int n;

char grade(int n)
{
	switch(n/10){
		case 10:
		case 9:
			return 'A';
			break;
		case 8:
			return 'B';
			break;
		case 7:
			return 'C';
			break;
		case 6:
			return 'D';
			break;
		
		default:
		return 'F';		
				
	}
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
