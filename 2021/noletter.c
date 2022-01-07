#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char c;
	char a, A;
	a = 'a';
	A = 'A';

	c = 'A';
	a = "a";
	A = "A";
	printf("a is: %d and A is: %d\n", a, A);
	printf("C is: %d ", c);
	return 0;
}
