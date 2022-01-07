#include <stdio.h>

int main(int argc, char** argv)
{
	int var = 100;

	int *ptr = 0;

	ptr = &var;

	*ptr = 200;

	printf("This value in var is: %d\n", var);
	printf("The address for the *ptr is: %d\n", ptr);

	return 0;
}
