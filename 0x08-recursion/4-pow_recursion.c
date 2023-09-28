#include "main.h"

/**
* _pow_recursion - the main function
* @x: the value to multiply
* @y: the mutiplying factor
* Return: interger value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
