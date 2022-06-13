#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: The index where value is found otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jumpBlock = 0, index = 0, prevIndex = 0, a = 0, b = 0;

	if (array && size && value && value != ' ')
	{
		jumpBlock = sqrt((int)size);
		for (; index < (int)size; index += jumpBlock)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			if (array[index] == value)
			{
				prevIndex = index - (int)jumpBlock;
				printf("Value found between indexes [%d] and [%d]\n", prevIndex, index);
				return (index);
			}
			if (array[index] < value && array[index + jumpBlock] >= value)
			{
				a = index;
				b = index + jumpBlock;
				printf("Value found between indexes [%d] and [%d]\n", a, b);
				return (findIndex(array, index, index + jumpBlock, value));
			}
		}
	}
	return (-1);
}

/**
 * findIndex - function that searches for a value in a slice of an array
 * @array: pointer to the first element of the array
 * @leftIndex: left Index of the evaluated array
 * @rightIndex: right Index of the evaluated array
 * @value: is the value to search
 * Return: The index where value is found otherwise -1
 */
int findIndex(int *array, int leftIndex, int rightIndex, int value)
{
	for (; leftIndex <= rightIndex; leftIndex++)
	{
		printf("Value checked array[%d] = [%d]\n", leftIndex, array[leftIndex]);
		if (array[leftIndex] == value)
			return (leftIndex);
	}
	return (-1);
}
