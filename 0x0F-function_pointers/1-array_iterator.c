#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @array: The array of elements onto which the function will be
 * executed.
 * @size: The size of the array.
 * @action: A pointer to the function that needs to be used.
 * Description: Long desc
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		/* apply the function onto every element in the array */
		action(array[i]);
	}
}

