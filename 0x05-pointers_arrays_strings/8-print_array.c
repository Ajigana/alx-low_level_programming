#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @a: function parameter
 * @n: number of element to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
