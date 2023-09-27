#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string in which to look for the character.
 * @c: The character to look for.
 * Description: Locates a character in a string.
 * Return: Pointer to the first occurence of the character, or NULL if the
 *         character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	/* The character was not found at this point */
	return (NULL);
}

