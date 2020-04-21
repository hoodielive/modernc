#include <stdio.h>

typedef struct 
{
	int x, y;
	short life; 
	char *name;
} Man; 

void structs()
{
	Man man; 
	man.x = 50;
	man.y = 50;
	man.life = 100;
	man.name = "a man";

	printf("Name of man: %s\n", man.name);
}

int main(int argc, char *argv[])
{
	structs();
	return 0;
}
