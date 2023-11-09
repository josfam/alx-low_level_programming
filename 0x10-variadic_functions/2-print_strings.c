#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to print in between two strings.
 * @n: The number of strings to print.
 * Description: Prints strings, followed by a new line.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);

	/* print the string parameters */
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (!(separator == NULL) && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strs);
}
