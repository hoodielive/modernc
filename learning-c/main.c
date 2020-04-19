#include <stdio.h>

// voids return by default
void explainVariables()
{
	/* integers */
	int x = 0;    /* 4 bytes, -2 billion to +2 billion */
	short y = 0;  /* 2 bytes, -32 thousand to +32 thousand */
	char z = 'f';   /* -127 to 128 */
	long whatever; /* obsolete, same as int on 32 bit systems */
	long long whateverlong; /* 8 bytes, 64 bit */

	// unsigned 
	unsigned int  il = 0; // 0 to 4 billion 
	unsigned char c1 = 0; // 0..255

	/* floating points */ 
	float w = 1.5f; // 4 byte
	double q = 1.500000000001 ; // 8 byte - Precision
	
	float w2;
	w2 = 3.0f;

	/* strings */
	char *str = "phrases of characters.. banana";
}

void doSomething()
{
	int x = 2, y = 5; 
	x += 5;

	x = 1; 
	x = !x; // flip to zero.

	printf("Result is: %d", x);
}

int doubleIt(int number)
{
	return number*2;
}

int halveIt(int number)
{
	return number/2;
}

int main(int argc, const char * argv[])
{
	printf(int argc, const char *argv[])
	
	if ( x == 100 )
	{
		x = halveIt(x);
	}

	printf("Program result: %d\n", x);
	return 0;
}
