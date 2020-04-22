#include <stdio.h>

struct inner_node
{
	int in_a;
	int in_b;
};

struct node
{
	int *a;
	int *b;

	struct inner_node* in_node;
};


void calling_function(void)
{
	int t1, t2, t3;
	t1 = 10;
	t2 = 20;
	t3 = called_function(t1, t2);
};

int called_function(int x, int y)
{

	int t1, t2, t3;
	t1 = x;
	t2 = y;
	t3 = t1 + t2;
	return t3;
}
int main()
{
	struct node *p;
	int *arrptr;
	int arr[10];
	arrptr = arr;

	printf("Size of pointer variable (struct node*) = %d\n", sizeof(struct node*));
	printf("Size of pointer variable pointing to int array = %d\n", sizeof(arrptr));
}
