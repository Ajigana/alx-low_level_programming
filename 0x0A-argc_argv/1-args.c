#include <stdio.h>

/**
 * main - print number of argument
 * @argc: argument count
 * @argv: arguments vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc -1);
	return (0);
}
