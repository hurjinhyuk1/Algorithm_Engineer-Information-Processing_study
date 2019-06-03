#include <stdio.h>

int n, d[110];

// 이 부분에 들어가야 될 코드를 작성하여 제출
int f(){
	int max=-1000;
	int index=-1;
	for(int i=0; i<n; ++i){
		if(max<d[i]){
		max=d[i];
		index=i+1;
		}
	}
	return index;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
