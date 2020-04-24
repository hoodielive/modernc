#include <stdio.h>

int main()
{
    long nc;
    long c;

    nc = 0;
    c = getchar();
    while (c != EOF)
    {
        ++nc; 
        printf("%ld\n", nc);
    }
}