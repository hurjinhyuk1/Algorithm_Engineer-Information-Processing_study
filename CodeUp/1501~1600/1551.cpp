#include <stdio.h>

int n, d[100010], k;

int f(int a)
{
	int cnt=1;
	for(int i=1; i<=n; ++i){
	
		if(d[i]==a) return i;	
		if(cnt==n)return -1;
		cnt++;
	}
	
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}

// 1 1 2 2 4
//a==2
