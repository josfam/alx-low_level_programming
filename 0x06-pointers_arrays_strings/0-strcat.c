#include "main.h"

/**
 * *_strcat - Concatenates two strings.
 * @dest: The string onto which the other string will be appended.
 * @src: The string that will be appended to the other string.
 * Description: Concatenates two strings.
 * Return: Pointer to the resulting string, dest.
 */
char *_strcat(char *dest, char *src)
{
	/* Create pointer to destination string */
	char *destPtr = dest;

	/* Move to the end of the destination */
	while (*destPtr != '\0')
	{
		destPtr++;
	}

	/* keep adding the rest of the characters of the source */
	while (*src != '\0')
	{
		*destPtr = *src;
		destPtr++;
		src++;
	}

	/* add the '\0' at the end of the destination */
	*destPtr = '\0';

	return (dest);
}

