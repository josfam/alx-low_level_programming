#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers using the Linear
*                 search algorithm
* @array: The array to search
* @size: The size of the array
* @value: The value to search for in the array
* Description: searches for a value in an array of integers using the Linear
*              search algorithm
* Return: The first index where the value is located. -1 if no value was found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1); /*value does not exist*/
}
