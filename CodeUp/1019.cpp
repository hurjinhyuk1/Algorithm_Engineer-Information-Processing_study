#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d.%d.%d",&a,&b,&c);
	printf("%04d.%02d.%02d\n",a,b,c);
	//ㅅ%d안에 01 02와 같이 넣어주면 한자리 두자리수로 출력됨
	// 01 -> 01  02 -> 001 
	return 0;
}
