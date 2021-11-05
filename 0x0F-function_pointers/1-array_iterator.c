#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @array: of int
 * @action: function pointer
 * @size: size of the array
 * Return: succesful
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
