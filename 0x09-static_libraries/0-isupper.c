/**
 * _isupper - Checks for a lowercase character.
 * @c: The character to check
 * Description: Checks if a character is lowercase.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
