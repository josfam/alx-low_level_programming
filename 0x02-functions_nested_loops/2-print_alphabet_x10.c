#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Description: prints 10 times the alphabet, in lowercase.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int count;
	int letter;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

