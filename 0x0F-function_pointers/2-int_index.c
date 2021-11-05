#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Search for integers
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer for array
 * Return: i (index of match) -1 (No matches or no size)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
