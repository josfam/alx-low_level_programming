#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Description: Swaps the values of two integers.
 * Return: Nothing.
 */
void swap_int (int *a, int *b)
{
	int temp = *a;

	a * = *b;
	b * = temp;
}

