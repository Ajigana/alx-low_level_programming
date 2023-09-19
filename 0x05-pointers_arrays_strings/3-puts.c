#include "main.h"
/**
 * _puts - function name
 * @str: function that prints a string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; *str++)
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
