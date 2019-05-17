#include <iostream>


int main(void)
{
	int answer= 0;
	
	int arr[] = { 1,2,3,7,9,12,21,23,27 };
	int first = 0, end = sizeof(arr) / sizeof(int)-1;
	int index;// 초기 인덱스 값 설정.
	
	while (first <= end) {
		index = (first + end) / 2;
		if (arr[index] == answer) return arr[index];

		if (arr[index] > answer) {
			end = index - 1;
			//index = first + end;
		}
		else if (arr[index] < answer) {
			first = index + 1;
			//index = first + end;
		}
	}
		
	



	return 0;
}

//1, 2, 3, 5, 8, 13, 21, 34, 55
//