#include <limits.h>
#include <stdio.h>


int max(int array[], int n)
{
	int ret = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] > ret )
		{
			ret = array[i];
		}
	}
	return ret;
}

int main(int argc, const char *argv[]) 
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 

  printf("Element of the array %d\n", max(array, 10));

	return 0;
}
