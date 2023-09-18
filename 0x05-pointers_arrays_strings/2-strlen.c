#include "main.h"
/**
 * _strlen - main function
 * @sl: function parameter
 * Return: return the length
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);
}
