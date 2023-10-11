#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string whose contents will be first.
 * @s2: The string whose contents will be added to s1.
 * Description: Concatenates two strings.
 * Return: Pointer to newly allocated space, or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *full_str;
	int s1len;
	int s2len;
	int full_len;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);
	full_len = s1len + s2len;

	/* Request memory enough for the '\0' as well */
	full_str = malloc(full_len + 1);

	if (full_str == NULL)
		return (NULL);

	/* add contents of s1 */
	for (i = 0; i < s1len; i++)
	{
		full_str[i] = s1[i];
	}

	/* add contents of s2 */
	for (j = i; j < full_len; j++)
	{
		full_str[j] = s2[j - i];
	}

	/* add null terminator */
	full_str[j] = '\0';

	return (full_str);
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
