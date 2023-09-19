include "main.h"
/**
 * _puts - function name
 * @str: function that prints a string
 */

void _puts(char *str)
{
	while (*str != *str++)
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
