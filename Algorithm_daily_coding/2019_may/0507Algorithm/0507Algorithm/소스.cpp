#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char table[3 * 1024][6 * 1024];

void printStar(int y, int x);
void makeStarTree(int n, int y, int x);
void printStarTree(int n);

int main(void)
{
	int n;
	cin >> n;
	memset(table, ' ', sizeof(table));
	makeStarTree(n, 0, 0);
	printStarTree(n);
	return  0;
}

void printStar(int y, int x)
{
	table[y + 0][x + 2] = '*';
	
	table[y + 1][x + 1] = '*';
	table[y + 1][x + 3] = '*';
	
	table[y + 2][x+0] = '*';
	table[y + 2][x+1] = '*';
	table[y + 2][x+2] = '*';
	table[y + 2][x+3] = '*';
	table[y + 2][x+4] = '*';


}
void makeStarTree(int n, int y, int x)
{
	if (n < 3) return;
	if (n == 3) {
		printStar(y, x);
		return;
	}
	makeStarTree(n / 2, y + 0, x + n / 2);
	makeStarTree(n / 2, y + n/2, x + 0);
	makeStarTree(n / 2, y + n/2, x + n );



}
void printStarTree(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 2; j++) {
			printf("%c", table[i][j]);
		}
		printf("\n");
	}
}