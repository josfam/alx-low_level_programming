#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string whose half will be printed.
 * Description: Prints half of a string, followed by a new line.
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len;

	len = _strlen(str);

	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
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

