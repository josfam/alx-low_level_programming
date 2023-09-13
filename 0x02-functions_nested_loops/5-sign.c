#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number whose sign will be checked.
 * Description: Prints whether a number is positive, negative, or zero.
 * Return: 1, 0, and -1 if n is greater than 0, zero, i
 *         or less than zero respectively.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
