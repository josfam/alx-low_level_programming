#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 * Description: Prints a string followed by a new line.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	/* we have reached the end of the string. */
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		/* Print the current character and advance one character forward */
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}

