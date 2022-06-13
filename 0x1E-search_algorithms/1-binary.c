#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: The index where value is found otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array && size && value && value != ' ')
		return (recursive_split(array, 0, size - 1, value));

	else
		return (-1);
}

/**
 * recursive_split - function that splits recursively an array
 * to find a given value and prints the splitings
 * @array: pointer to the first element of the array
 * @leftIndex: left Index of the evaluated array
 * @rightIndex: right Index of the evaluated array
 * @value: is the value to search
 * Return: The index where value is found otherwise -1
 */

int recursive_split(int *array, int leftIndex, int rightIndex, int value)
{
	int middleIndex;

	if (rightIndex >= leftIndex)
	{
		print_array(array, leftIndex, rightIndex);
		middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

		if (array[middleIndex] == value)
			return (middleIndex);

		else if (array[middleIndex] > value)
			return (recursive_split(array, leftIndex, middleIndex - 1, value));

		else
			return (recursive_split(array, middleIndex + 1, rightIndex, value));
	}
	return (-1);
}

/**
 * print_array - function that prints an array
 * @array: pointer to the first element of the array
 * @start: left Index of the evaluated array
 * @end: right Index of the evaluated array
 * Return: None
 */

void print_array(int *array, int start, int end)
{
	printf("Searching in array: %d", array[start]);
	start++;
	for (; start <= end; start++)
	{
		printf(", %d", array[start]);
	}
	printf("\n");
}
