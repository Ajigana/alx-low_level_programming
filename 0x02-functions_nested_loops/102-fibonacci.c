#include <stdio.h>

/**
 * main - the function that computes and prints the sum of all the multiples
 * Return: return 0
 */

int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", term1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
