#include <stdio.h>


int main(int argc, char *argv[])
{
  int var = 0;
  int array[] = { 1, 2, 3, 4, 5 };
  int *ptr;
  ptr = NULL;
  ptr = &var;
  ptr = array;

  // int *ptr = &x; 
  *ptr = 50; // contents-of

  // int *ptr = array;
  ptr[i] = 50; // array-element

  // SomeStruct *ptr = &someStruct;
  ptr->x = 50; // struct property
}