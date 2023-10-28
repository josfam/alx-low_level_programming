#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to use when searching accept.
 * @accept: The string to search.
 * Description: Searches a string for any of a set of bytes.
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}

