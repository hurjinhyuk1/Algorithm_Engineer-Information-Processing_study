#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()

int comparisonFunctionString(const void *a, const void *b);


int main(void) {
	const int ELEMENTS = 8; // 요소 개수

	char array[ELEMENTS][6 + 1] = {
		"맹구",
		"배용준",
		"땡칠이",
		"장동건",
		"강수정",
		"송창식",
		"황당해",
		"고은아" };


	qsort(array, ELEMENTS, sizeof(array[0]), comparisonFunctionString);

	for (int i = 0; i < ELEMENTS; i++)
		printf("%s\n", array[i]);

	return 0;
}




int comparisonFunctionString(const void *a, const void *b) {
	printf("%d", strcmp((char *)a, (char *)b));
	return(strcmp((char *)a, (char *)b));
}