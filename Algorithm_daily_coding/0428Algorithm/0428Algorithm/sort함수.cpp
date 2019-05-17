#include <iostream>
#include <algorithm>

using namespace std;


bool compare(int a, int b)
{
	return a < b;
}
class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	bool operator<(Student &student) {
		return this->score < student.score;
	}
};
int main(void)
{

	int a[10] = { 9,3,5,3,1,10,8,6 };
	int b[] = { 3,5 };
	printf("%p\n", b);
	printf("%p", b + 1);

	//ort(a, a + 10);
	return 0;
}