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

