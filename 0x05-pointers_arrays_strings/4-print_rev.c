#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: The string to print in reverse.
 * Description: Prints a string, in reverse.
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to return.
 * Description: Returns the length of a string.
 * Return: The length of the string, s.
 */
int _strlen(char *s)
{
	int len;
	int counter;

	counter = 0;
	len = 0;

	while (*(s + counter) != '\0')
	{
		len++;
		counter++;
	}

	return (len);
}

