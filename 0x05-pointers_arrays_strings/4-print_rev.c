#include "main.h"

/**
 * print_rev - print the reverse string
 * @s: string to be reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
