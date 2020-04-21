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
    printf("Size of name is %lu\n", strlen(name));

    if (strcmp(name, "Larry") == 0)
    {
        printf("You get access!\n");
    }
    char copy[20];
    strcpy(copy, name);

    printf("Copy of name is %s\n", copy);
    
    char lastName[] = "Solomon";
    strcat(copy, lastName);

    printf("Fullname is: %s\n ", copy);
    return 0;
}
