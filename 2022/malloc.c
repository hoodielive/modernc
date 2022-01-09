#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main() 
{
  char *a;
  char *b;
  char *c;
  char *d;

  a = malloc(4);
  b = malloc(4);
  c = malloc(4);

  strcpy(a, "foo\0");
  strcpy(a, "bar\0");
  strcpy(a, "baz\0");
  
  // Print strings.
  printf("%s\n", a);
  printf("%s\n", b);
  printf("%s\n", c);

  // Print pointers.
  // Notice these don't differ by 4 like in C++?
  printf("%p\n", a);
  printf("%p\n", b);
  printf("%p\n", c);

  // Free b but assign to d.
  // But will d get b's address?
  free(b);
  d = malloc(4);
  printf("%s\n", d);
  printf("%p\n", d);

  return 0;
}
