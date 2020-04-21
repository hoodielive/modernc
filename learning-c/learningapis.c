#include <stdio.h>

typedef struct
{
    int x, y;
    short life;
    char *name;
} Man;

void function(int x, int y, int array[], const Man *man)
{
//    man.x = 100;
    printf("x: %d\n", man->x);
}

int main(int argc, char *argv[])
{
    Man man;
    int array[2] = { 1, 2 };
    man.x = 50;
    function(0, 125, array, &man);
    printf("outside x: %d\n", man.x);

    return 0;
}

