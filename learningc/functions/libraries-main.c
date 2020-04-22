#include <stdio.h>
#include "libraries.h"

int main()
{
    int x = 5;
    int xSquared = square(x);

    printf("%d\n", xSquared);
    changeVal(&x);
    int xTo5 = power(x, 5);
    printf("%d\n", xTo5);
    int recursive = recursivePower(5, 5);
    printf("%d\n", recursive);
    printf("%d\n", x);
    return 0;
}
