#include "main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: Size of the triangle.
 * Description: Prints a triangle, followed by a new line.
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int row;
	int spaces;
	int hashes;

	for (row = 0; row < size; row++)
	{
		/* determine spaces and hashes required for this row */
		spaces = size - (row + 1);
		hashes = row + 1;

		/* print the spaces and reset them when finished */
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}

		/* print the hashes and reset them when finished */
		while (hashes > 0)
		{
			_putchar('#');
			hashes--;
		}

		_putchar('\n');
	}
}

