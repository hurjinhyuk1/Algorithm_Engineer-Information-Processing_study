
#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(a%2==1){
  	a=a/2+1;
  	
  }
  else if(b%2==1){
  	b=b/2 +1;
  }
  else if(a%2==0){
  	a=5*a;
  }
  else if (b%2==0){
  	b=5*b;
  }
  printf("%d %d",a,b);
  
  return 0;
}
