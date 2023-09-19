#include "main.h"
/**
 * _puts - function name
 * @str: function that prints a string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
