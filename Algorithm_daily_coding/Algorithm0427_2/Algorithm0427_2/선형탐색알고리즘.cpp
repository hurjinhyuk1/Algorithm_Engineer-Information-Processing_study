#include <iostream>

using namespace std;
void linearSearch(int arr[]) {

	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		if (number == arr[i]) {
			cout << "해당 숫자가 존재합니다." << endl;
			return;
		}

	}
	cout << "해당 숫자가 존재하지않습니다." << endl;
}

int number;
//int result;
int main(void)
{
    int arr[] = { 10,54,29,65,54,76 };
	cin >> number;
	linearSearch(arr);
	
	return 0;

}