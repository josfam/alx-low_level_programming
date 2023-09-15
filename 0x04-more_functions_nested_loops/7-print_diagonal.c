#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times '\' should be printed.
 * Description: Draws a diagonal line on the terminal.
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int row;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < n; row++)
	{
		/* print the spaces */
		spaces = row;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		/* print the \ */
		_putchar('\\');
		_putchar('\n');
	}
}

