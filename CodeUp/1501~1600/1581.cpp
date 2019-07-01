#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
void myswap(int *a,int*b){
	if(*a>*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
		
	}
	
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
