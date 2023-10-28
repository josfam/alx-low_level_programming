#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to use in the comparison.
 * @s2: The second string to use in the comparison.
 * Description: Compares two strings.
 * Return: A positive number, negative number, or 0 if
 *         s1 is greater than, less than, or the same as s2 respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-15);
		if (s1[i] > s2[i])
			return (15);
	}
	/* handle different lengths */
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-15);
	if (s1[i] != '\0' && s2[i] == '\0')
		return (15);

	/* They are the same */
	return (0);
}

