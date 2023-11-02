#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments passed to the program.
 * @av: The array of strings that holds the arguments passed.
 * Description: Concatenates all the arguments of your program.
 * Return: Pointer to the new string, or NULL if any failure is encountered.
 */
char *argstostr(int ac, char **av)
{
	int i, j, arg_len, final_len;
	char *final_str, *arg, *final_ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the length of final_str, including new lines */
	for (i = 0; i < ac; i++)
		final_len += _strlen(av[i]) + 1;

	/* ask for memory for final string */
	final_str = malloc(sizeof(char) * final_len + 1);

	if (final_str == NULL)
		return (NULL);

	final_ptr = final_str;

	/* populate allocated memory with chars from the arguments passed */
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		arg_len = _strlen(arg);

		for (j = 0; j < arg_len; j++)
		{
			*final_ptr = arg[j];
			final_ptr++;
		}
		*final_ptr = '\n';
		final_ptr++;
	}

	/* add null terminator */
	*final_ptr = '\0';

	return (final_str);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to return.
 * Description: Returns the length of a string.
 * Return: The length of the string, s.
 */
int _strlen(char *s)
{
	int len, counter;

	counter = 0;
	len = 0;

	while (*(s + counter) != '\0')
	{
		len++;
		counter++;
	}

	return (len);
}
