#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int sum;
	int i;

	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum = sum + i;
			continue;
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
			continue;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
