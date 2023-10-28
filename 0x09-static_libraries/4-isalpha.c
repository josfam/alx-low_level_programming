#include "main.h"

/**
 * _isalpha - Checks for an alphabetical character
 * @c: The character to check.
 * Description: Checks for an alphabetical character.
 * Return: 1 if character is alphabetical, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

