#include "main.h"

/**
 * _strncat - Appends atmost n bytest from source to destination string.
 * @dest: The string onto which the bytes from src will be appended.
 * @src: The string from which n bytes will be taken.
 * @n: The number of bytes to take from src, and append to dest.
 * Description: Appends atmost n bytest from source to destination string.
 * Return: A pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* initial setup */
	char *destPtr = dest;
	int bytesMoved;

	bytesMoved = 0;

	/* handle n = 0*/
	if (n == 0)
		return (src);

	/* prepare to append to the dest */
	while (*destPtr != '\0')
	{
		destPtr++;
	}

	/* start appending characters from source0 */
	while (bytesMoved < n && *src != '\0')
	{
		*destPtr = *src;
		src++;
		destPtr++;
		bytesMoved++;
	}

	/* add NUL if it does not exist at the end of destination */
	if (*destPtr != '\0')
		*destPtr = '\0';

	return (dest);
}

