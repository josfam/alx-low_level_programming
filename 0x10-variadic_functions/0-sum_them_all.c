#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters
 * Description: Returns the sum of all its parameters.
 * Return: The sum of all parameters passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	sum = 0;

	/* add up the sum for every parameter encountered. */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
