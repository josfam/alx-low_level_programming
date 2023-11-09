#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters to add.
 * Description: Returns the sum of all its parameters.
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list numargs;

	if (n == 0)
		return (0);

	va_start(numargs, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numargs, int);
	}

	va_end(numargs);

	return (sum);
}

