#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string whose copy will be contained in the allocated memory.
 * Description: Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Return: A pointer to the newly allocated memory containing the copied
 * string.
 */
char *_strdup(char *str)
{
	int i;
	int lenstr;
	char *ptr;

	if (str == NULL)
		return (NULL);

	lenstr = _strlen(str);
	ptr = malloc((sizeof(char) * lenstr) + 1);

	if (ptr == NULL)
		return (NULL);

	/* Copy the str to the memory area */
	for (i = 0; i < lenstr; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
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
