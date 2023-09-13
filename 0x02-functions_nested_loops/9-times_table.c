#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Description: Prints the 9 times table starting from 0.
 * Return: Nothing
 */
void times_table(void)
{
	int row;
	int col;
	int result;
	int left_digit;
	int right_digit;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			result = row * col;
			left_digit = result / 10;
			right_digit = result % 10;

			/* put a space instead of a leading 0 */
			if (left_digit == 0)
			{
				_putchar(' ');
				_putchar('0' + right_digit);
			}
			else
			{
				_putchar('0' + left_digit);
				_putchar('0' + right_digit);
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
