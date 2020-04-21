#include <stdio.h>

int main(void)
{
	puts("Printable ASCII Table:");
	for (int i = 32; i < 127; ++i)
	{
		putchar(i);
		putchar(i % 16 == 15 ? '\n' : ' ');
	}
}
