#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array to search for an integer.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Description: Searches for an integer.
 * Return: The index of the first element for with the cmp function does not
 * return 0. Return -1 is no element matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int elem;

	if (size <= 0)
		return (-1);

	/* Apply the comparison function to every element of the array */
	for (i = 0; i < size; i++)
	{
		elem = array[i];

		if (cmp(elem) != 0)
		{
			return (i);
		}
	}

	/* Nothing was found */
	return (-1);
}

