#include <stdio.h>
int main (void)
{
	char name[20];
	int age;
	char department;
	double key;
	
	scanf("%s",name);
	scanf("%d",&age);
	getchar();
	scanf("%c",&department);
	scanf("%lf",&key);
	
	
	printf("%s\n",name);
	printf("%d\n",age);
	printf("%c\n",department);
	printf("%g\n",key);
	
	
	return 0;
}
