#include <stdio.h>

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
    return 0;
}
