#include <string>

#include <iostream>


int main(void)
{


	std::string a = "";
	if (a.empty()) {
	std::cout << "empty";
	std::cout << a.empty() << std::endl;

	}
	a = "hello";
	if (!a.empty()) {
		std::cout << "not empty";
		std::cout << a.empty() << std::endl;

	}
}