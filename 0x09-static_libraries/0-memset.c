#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The memory area to fill with a constant byte.
 * @b: The byte to fill into the memory area, s.
 * @n: Number of bytes of the memory area, s, to be filled with the byte, b.
 * Description: Fills memory with a constant byte.
 * Return: A pointer to the memory area, s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memPtr;

	memPtr = s;

	for (i = 0; i < n; i++)
	{
		*memPtr = b;
		memPtr++;
	}

	return (s);
}

