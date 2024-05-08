#include <stdio.h>
#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array of integers
*                        using the Interpolation search algorithm
* @array: The array to search
* @size: The size of the array to search
* @value: The value to search for
* Description: Searches for a value in a sorted array of integers
*              using the Interpolation search algorithm. The formula used to
*              calculate the position is:
*              pos = low + (((double)(high - low) /
*              (array[high] - array[low])) * (value - array[low]));
* Return: The index where the value was located. -1 if there was no value
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));

	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	else
	{
		while (low <= high)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] > value)
				high = pos - 1;
			else if (array[pos] < value)
				low = pos + 1;
			else
				return (pos);

			pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		}
	}
	return (-1);
}
