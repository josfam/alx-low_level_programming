#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function. These
 *          include c(char), i(integer), f(float), s(char *).
 * Description: Prints anything.
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	int i, foundBadChar;
	char *str;
	va_list allargs;

	va_start(allargs, format);
	i = 0;

	while (i < _strlen(format))
	{
		foundBadChar = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(allargs, int));
			break;
		case 'i':
			printf("%i", va_arg(allargs, int));
			break;
		case 'f':
			printf("%f", va_arg(allargs, double));
			break;
		case 's':
			str = va_arg(allargs, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			foundBadChar = 1;
			break;
		}
		if (format[i + 1] && !foundBadChar) /* No comma after the last arg */
			printf(", ");
		i++;
	}
	va_end(allargs);
	printf("\n");
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to return.
 * Description: Returns the length of a string.
 * Return: The length of the string, s.
 */
int _strlen(const char *s)
{
	int len, counter;

	counter = 0;
	len = 0;

	while (*(s + counter) != '\0')
	{
		len++;
		counter++;
	}

	return (len);
}
