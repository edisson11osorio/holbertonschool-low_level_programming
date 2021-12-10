#include "main.h"

int _pow(int num, int exp);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to string of 0 or 1 chars
 * Return: the converted number
 * or return 0 if there is one or more chars that is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0, number = 0;
	int i = 0, exp = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		size++;
	}
	for (i = size; i >= 0; i--)
	{
		if (b[i] >= '0' && b[i] <= '9')
		{
			number += (b[i] - '0') * _pow(2, exp);
			exp++;
		}
	}
	return (number);
}

/**
 * _pow - result of number^exp
 * @num: base
 * @exp: potencia
 * Return: result
 */

int _pow(int num, int exp)
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