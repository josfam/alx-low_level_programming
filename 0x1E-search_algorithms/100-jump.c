#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array of integers using the
*               Jump search algorithm
* @array: The array to search
* @size: The size of the array to search
* @value: The value to search for
* Description: Searches for a value in a sorted array of integers using the
*              Jump search algorithm
* Return: The index where the value was located. -1 if there was no value
*/
int jump_search(int *array, size_t size, int value)
{
	int block_size;
	size_t i, start, end;

	if (!array)
		return (-1);

	block_size = sqrt(size);
	start = 0;
	end = start + block_size;

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && end <= size)
	{
		start = end;
		end = start + block_size;
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}
	/* do linear search, making sure to not index out of the array */
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	if (end > size - 1)
		end = size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
