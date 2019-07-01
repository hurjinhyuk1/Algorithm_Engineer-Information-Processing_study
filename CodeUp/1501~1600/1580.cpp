#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
float circle(float r){
	return 3.14*r*r;
}
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}
