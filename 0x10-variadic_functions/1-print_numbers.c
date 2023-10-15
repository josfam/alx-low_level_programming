#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The character to put in between printed numbers.
 * @n: The number of numbers to print.
 * Description: Prints numbers, followed by a new line.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (!(separator == NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
