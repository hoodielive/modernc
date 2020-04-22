#include <stdio.h>

void square(int *input)
{
	*input *= *input;
}

int main()
{
  int a = 100;
  int *b = &a;

  a = 200;
  printf("a  = %d\n", a);
  printf("*b  = %d\n", *b);

  a = 300;
  printf("a  = %d\n", a);
  printf("*b  = %d\n", *b);

  int c = 6000;
  b = &c;
  printf("a  = %d\n", a);
  printf("*b  = %d\n", *b);

	int x = 5;
	square(&x);
	printf("%d\n", x);

	int size = 6;
	int ages[] = { 2, 43, 63000, 23, 05, 53 };

	printf("memory size of ages is : %lu\n", sizeof(ages));
  return 0;
}
