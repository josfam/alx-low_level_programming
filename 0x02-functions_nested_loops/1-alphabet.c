#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Description: Prints the lowercased alphabet from a-z
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	int i;

	/* print a-z */
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: The entry point for this program.
 *
 * Return: 0 if successful. Non-zero otherwise.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

