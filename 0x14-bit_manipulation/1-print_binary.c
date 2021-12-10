#include "main.h"

unsigned long int _pow(unsigned long int num, int exp);

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: number to print in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int exp;

	if (n == 0)
	{
		printf("0");
	}
	else
	{
		for (exp = 0; _pow(2, exp) <= n; exp++)
		{
		}
		if (_pow(2, exp) > n)
		{
			exp--;
		}
		printf("1");
		n = n - _pow(2, exp);
		exp--;
		while (n > 0 && exp > 0)
		{
			for (; _pow(2, exp) > n && exp > 0; exp--)
			{
				printf("0");
			}
			printf("1");
			n = n - _pow(2, exp);
			exp--;
		}
		while (n <= 0 && exp >= 0)
		{
			printf("0");
			exp--;
		}
	}
}

/**
 * _pow - result of number^exp with base 2
 * @num: base
 * @exp: potencia
 * Return: result
 */

unsigned long int _pow(unsigned long int num, int exp)
{
	int i;

	if (exp == 0)
	{
		return (1);
	}
	if (exp == 1)
	{
		return (num);
	}
	for (i = 2; i <= exp; i++)
	{
		num = num * 2;
	}
	return (num);
}