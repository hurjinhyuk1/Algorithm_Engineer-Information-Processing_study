#pragma warning (disable:4996)
#include <cstdio>

int main(void)
{
	int a[100][100];
	int horse[10];
	for (int i = 0; i<10; ++i) {
		for (int j = 0; j<10; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int k = 0; k<10; k++) {
		scanf("%d", &horse[k]);
	}

	for (int k = 0; k<10; k++) {
		if (horse[k] == 1) {
			for (int s = 9; s >= 0; s--) {
					if (a[s][k]>0) {
						printf("%d crash\n",k+1);
						break;
					}
					else if (a[s][k]<0) {
						printf("%d fall\n",k+1);
						break;
					}
					else if (s == 0)printf("%d safe\n",k+1);

				
			}
		}
		else continue;
	}


	return 0;
}
