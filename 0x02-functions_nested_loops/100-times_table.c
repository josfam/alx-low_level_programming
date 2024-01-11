#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The n times table
 * Description: Prints the n times table, starting with 0
 * Return: Nothing
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n > 15 || n < 0)
		;
	else
	{
		for (row = 0; row <= n; row++) /* rows */
		{
			for (col = 0; col <= n; col++) /* cols */
			{
				result = row * col;
				if (result < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + result);
				}
				else if (result > 9 && result < 100)
				{
					print_double(result);
				}
				else
				{
					print_triple(result);
				}

				/* _putchar(row * col); */
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_triple - Prints a triple-digit number
 * @num: The number to print
 * Description: Prints a triple-digit number
 * Return: Nothing
*/
void print_triple(int num)
{
	int left, l_left, r_left, right;

	_putchar(' ');
	left = num / 10;
	l_left = left / 10;
	r_left = left % 10;
	right = num % 10;
	_putchar('0' + l_left);
	_putchar('0' + r_left);
	_putchar('0' + right);
}

/**
 * print_double - Prints a double-digit number
 * @num: The number to print
 * Description: Prints a double-digit number
 * Return: Nothing
*/
void print_double(int num)
{
	int left, right;

	_putchar(' ');
	_putchar(' ');
	left = num / 10;
	right = num % 10;
	_putchar('0' + left);
	_putchar('0' + right);
}
