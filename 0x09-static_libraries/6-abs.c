#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer whose absolute value is to be computed.
 * Description: Computes the absolute value of an integer.
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}

	return (n);
}
