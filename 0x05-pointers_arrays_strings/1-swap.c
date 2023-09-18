#include <stdio.h>
/**
 * swap_int - functiom name
 * @a: the first parameter
 * @b: the second parameter
 * Return: return 0
 */

void swap_int(int *a, int *b)
	{
int c;
c = *a;
*a = *b;
*b = c;
	}
