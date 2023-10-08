/**
 * _islower - Checks for a lowercase character.
 * @c: The character to check
 * Description: Checks if a character is lowercase.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
