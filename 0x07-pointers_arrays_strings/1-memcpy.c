#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Memory area onto which to copy bytes from the source.
 * @src: Memory area from which bytes will be copied to the source.
 * @n: The number of bytes to copy from source to the destination.
 * Description: Copies memory area.
 * Return: Pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destPtr;

	destPtr = dest;

	for (i = 0; i < n; i++)
	{
		*destPtr = *src;
		destPtr++;
		src++;
	}

	return (dest);
}

