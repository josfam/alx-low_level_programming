#include <stdio.h>
#include "search_algos.h"

/**
* exponential_search - Searches for a value in a sorted array of integers using
*                      the Exponential search algorithm
* @array: The array to search
* @size: The size of the array to search
* @value: The value to search for
* Description: Searches for a value in a sorted array of integers using
*              the Exponential search algorithm
* Return: The index where the value was located. -1 if there was no value
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, prev_i;
	int start, mid, end;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	if (array[start] == value)
		return (start);
	i = start + 1;

	while ((int)i <= end && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev_i = i; /* value before doubling */
		i = i * 2;
	}
	start = prev_i;
	if (i >= size) /* clip to the end of the array */
		i = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", prev_i, i);
	end = i;

	/* switch to binary search */
	while (start <= end)
	{
		print_search_space(array, start, end);
		mid = start + ((end - start) / 2);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}

/**
 * print_search_space - Prints the values of the array that will be searched
 * @array: The array to search
 * @start: The starting index in the search space
 * @end: The ending index in the search space
 * Description: Prints the values of the array that will be searched
 * Return: Nothing
*/
void print_search_space(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
