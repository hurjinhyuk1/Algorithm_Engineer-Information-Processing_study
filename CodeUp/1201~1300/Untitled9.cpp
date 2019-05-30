#pragma warning (disable:4996)
#include <cstdio>
#include <string.h>
int main(void)
{
	char operation[100];
	char b[51];
	int a[51];
	int sum = 0;
	scanf("%s", operation);
	int size = strlen(operation);
	for (int i = 0; i < size; ++i) {
		if (i % 2 == 1 && i == 1) {
			if (operation[i] == '+') {
				sum = (operation[i - 1] - 48) + (operation[i + 1] - 48);
				i = i + 1;
			}
			else if (operation[i] == '-') {
				sum = (operation[i - 1] - 48) - (operation[i + 1] - 48);
				i = i + 1;
			}
			else if (operation[i] == '*') {
				sum = (operation[i - 1] - 48) * (operation[i + 1] - 48);
				i = i + 1;
			}
			else if (operation[i] == '/') {
				sum = (operation[i - 1] - 48) / (operation[i + 1] - 48);
				i = i + 1;
			}
			else if (operation[i] == '=') {
				break;
			}
		}
			else if (i % 2 == 1&&i!=1) {
				if (operation[i] == '+') {
					sum = sum+(operation[i + 1] - 48);
					i = i + 1;
				}
				else if (operation[i] == '-') {
					sum = sum-(operation[i + 1] - 48);
					i = i + 1;
				}
				else if (operation[i] == '*') {
					sum = sum*(operation[i + 1] - 48);
					i = i + 1;
				}
				else if (operation[i] == '/') {
					sum = sum / (operation[i + 1] - 48);
					i = i + 1;
				}
				else if (operation[i] == '=') {
					break;
				}
			}
		}
	printf("%d", sum);

	return 0;
	}
