#include "main.h"

/**
 * print_square - Prints a square.
 * @size: The size of the square.
 * Description: Prints a square.
 * Return: Nothing.
 */
void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = size; row > 0; row--)
	{
		for (col = size; col > 0; col--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
