#include <iostream>

int main()
{
	int var = 100;
	int *ptr = nullptr;
	ptr = &var;
	*ptr = 200;

	std::cout << "The value of var is: " << var << std::endl;

	return 0;
}
