#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The string after which s2 will be concatenated.
 * @s2: The string whose first n bytes will be concatenated after s1.
 * @n: The first n bytes of s2 that should be concatenated after s1.
 * Description: Concatenates two strings.
 * Return: A pointer to allocated memory that contains s1, followed by the
 *         first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *finalStr;
	unsigned int i, j, s1Len, s2Len;

	/* Assume an empty string where NULL is passed. */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n == 0)
		return (s1);

	s1Len = _strlen(s1);
	s2Len = _strlen(s2);

	/* Get enough memory for concatenation and null terminator */
	finalStr = malloc((sizeof(char) * (s1Len + s2Len)) + 1);

	if (finalStr == NULL)
		return (NULL);

	if (n >= s2Len)
		n = s2Len;

	/* copy over s1 content */
	for (i = 0; i < s1Len; i++)
		finalStr[i] = s1[i];

	/* copy over s2 content */
	for (j = 0; j < n; j++)
	{
		finalStr[i] = s2[j];
		i++;
	}

	finalStr[i] = '\0';

	return (finalStr);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to return.
 * Description: Returns the length of a string.
 * Return: The length of the string, s.
 */
int _strlen(char *s)
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
