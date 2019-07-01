#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
int mymax(int a,int b){
	if(a>b)return a;
	else return b;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}
