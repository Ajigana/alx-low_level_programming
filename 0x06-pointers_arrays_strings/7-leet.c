#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @s: Function parameter
  *
  *Return: value of s
 */

char *leet(char *s)
{
	int k, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
	for (r = 0; r < 10; r++)
	{
	if (s[k] == s1[r])
	{
	s[k] = s2[r];
	}
	}
	}
	return (s);
}
