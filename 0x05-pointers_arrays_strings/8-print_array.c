#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by
 *				 a new line.
 * @a: The array of integers.
 * @n: Number of elements of the array to be printed.
 * Description: Prints n elements of an array of integers, followed by
 *				a new line.
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	/* print the last element */
	printf("%d\n", a[i]);
}

