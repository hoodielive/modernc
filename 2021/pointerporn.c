#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	int var = 100;
	int* ptr = 0;
	ptr = &var;
	*ptr = 200;

	printf("This is the result of this: %ls", ptr);
	return 0;
}
