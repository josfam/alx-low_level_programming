#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search the prefix substring for.
 * @accept: The characters(substring) to search.
 * Description: Gets the length of a prefix substring.
 * Return: Number of bytes in the initial segment of string s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		/* character was not found in accept */
		if (accept[j] == '\0')
			break;
	}
	return (length);
}

