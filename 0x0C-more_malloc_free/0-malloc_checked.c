#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Bytes to allocate.
 * Description: Allocates memory using malloc.
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
