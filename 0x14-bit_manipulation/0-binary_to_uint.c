#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint- function that converts binary to unsigned int
 * @b: takes in a conts char string
 * Return: the converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int coun = 0;
	unsigned int num = 0;
	unsigned int base = 1;

	if (b)
	{
		for (coun = 0; b[coun] != '\0'; coun++)
		{
			if (b[coun] != '1' && (b[coun] != '0'))
			{
				return (0);
			}
		}

		coun--;
		for (; coun >= 0; coun--)
		{
			num += (b[coun] - '0') * base;
			base = base * 2;
		}
	}
	return (num);
}
