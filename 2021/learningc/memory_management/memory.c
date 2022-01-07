#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
	char name[30];
	int age;
	bool isVerified;
} User;

User *createUser(char name[], int age, bool isVerified)
{
	User *newUser = malloc(sizeof(User));
	strcpy(newUser->name, name);
	newUser->age = age;
	newUser->isVerified = isVerified;

	return newUser;
};

int main()
{

	int size;
	printf("How many int elements u need bro?: ");

	// Scan a value into size because we are doing
	// dynamic memory allocation.

	scanf("%d", &size);

	// Malloc will return a pointer.

	int *arr = malloc(size * sizeof(int));

	// Lets make sure that we have the memory to spare
	// before we go all willy nilly.

	if(arr == 0)
	{
		printf("Invalid pointer. Error allocating memory.\n");
	}
	else
	{
		printf("Youre good to go!\n");
	}

	// Note: when you pass an array to a function, it
	// decays into a pointer. Scanf needs a pointer.
	// You can still use array-like syntax.

	for (int i=0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Your array:\n");

	for (int i=0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	free(arr);

	User *me = createUser("Law Moor", 99, false);
	printf("Sogo Aje is %d years old!!\n", me->age);

	free(me);

	return 0;
}
