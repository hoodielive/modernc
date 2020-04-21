#include <stdio.h>

/* copy input to output; 2nd version */

int main() 
{
    while ((int c = getchar()) != EOF)
        putchar(c);
    return 0;
}
