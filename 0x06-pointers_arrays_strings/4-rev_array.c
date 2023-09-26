#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of integers.
 * @a: The array whose contents to reverse.
 * @n: The number of elements in the array.
 * Description: Reverses the contents of an array of integers.
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	for (start = 0, end = n - 1; end > start; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}

