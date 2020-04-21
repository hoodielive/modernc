#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your name? ");
    char name[20];
    scanf("%19s", name);
    
    int letter = 0;
    while (name[letter] != '\0')
    {
        letter++;
    }

    printf("Size of name is %d\n", letter);
    return 0;
}
