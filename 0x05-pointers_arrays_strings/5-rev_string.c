#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 * Description: Reverses a string.
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int start;
	int end;
	int slen;
	int temp;

	slen = _strlen(s);
	start = 0;
	end = slen - 1;

	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
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

