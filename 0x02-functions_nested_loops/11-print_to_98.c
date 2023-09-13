#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The number to start counting from.
 * Description: Prints all natural numbers from n to 98,
 *				followed by a new line.
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int delta;

	/* decide whether to increment or decrement */
	if (n > 98)
		delta = -1;
	else
		delta = 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += delta;
	}
	/* the last number to print is always 98*/
	printf("%d\n", n);
}

