#include "main.h"

/**
 * _strncpy - Copies at most n bytes from source to destination string.
 * @dest: String whose first bytes will be copied over by n bytes from src.
 * @src: String whose first n bytes will be copied onto dest.
 * @n: Number of bytes from src to copy over to dest.
 * Description: Copies at most n bytes from source to destination string.
 *				Behaves just like the standard library's strncpy function.
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* handle the len(src) < n case */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

