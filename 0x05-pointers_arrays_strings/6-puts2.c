#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with
 *         the first character.
 * @str: The string to print in this manner.
 * Description: Prints every other character of a string, starting
 *              with the first character, followed by a new line.
 * Return: Nothing.
 */
void puts2(char *str)
{
	int start;
	int len;
	int end;

	len = _strlen(str);

	if (len % 2 == 0)
		end = len - 2;
	else
		end = len - 1;

	for (start = 0; start <= end; start += 2)
	{
		_putchar(str[start]);
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

