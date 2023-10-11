#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific
 * char.
 * @size: The size of the array.
 * @c: The char to initialize in the array created.
 * Description: Creates an array of chars, and initializes it with a specific
 * char.
 * Return: A pointer to the array, or NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
		return (NULL);

	/* get memory */
	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
